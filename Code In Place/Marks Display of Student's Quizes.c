#include<stdio.h>
#include<string.h>
#define MAX 20
struct Student
{
    int id;
    char name[50];
    char sex;
    float quiz1, quiz2;
    float mid;
    float final;
    float total;
};
void addStudents()
{
    FILE *fp = fopen("students.txt", "a");
    struct Student s;

    if (fp == NULL)
	{
        printf("File error!\n");
        return;
    }

    printf("\nEnter Student ID: ");
    scanf("%d", &s.id);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Sex (M/F): ");
    scanf(" %c", &s.sex);

    printf("Enter Quiz 1 score: ");
    scanf("%f", &s.quiz1);

    printf("Enter Quiz 2 score: ");
    scanf("%f", &s.quiz2);

    printf("Enter Midterm score: ");
    scanf("%f", &s.mid);

    printf("Enter Final score: ");
    scanf("%f", &s.final);

    s.total = s.quiz1 + s.quiz2 + s.mid + s.final;

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);

    printf("Record saved successfully!\n");
}
void displayByScore(float limit)
{
    FILE *fp = fopen("students.txt", "r");
    struct Student s;

    if (fp == NULL)
	{
        printf("File not found!\n");
        return;
    }

    printf("\nStudents with Total Score < %.0f\n", limit);
    printf("--------------------------------\n");

    while (fread(&s, sizeof(s), 1, fp))
	{
        if (s.total < limit)
		{
            printf("ID: %d | Name: %s | Total: %.2f\n",
                   s.id, s.name, s.total);
        }
    }
    fclose(fp);
}
int main()
{
    int choice;

    do {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display Students with score < 50\n");
        printf("3. Display Students with score < 80\n");
        printf("4. Display Students with score < 100\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
		{
            case 1:
                addStudents();
                break;
            case 2:
                displayByScore(50);
                break;
            case 3:
                displayByScore(80);
                break;
            case 4:
                displayByScore(100);
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
	while (choice != 5);
    return 0;
}
