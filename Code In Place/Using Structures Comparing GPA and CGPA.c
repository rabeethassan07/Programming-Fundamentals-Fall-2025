#include<stdio.h>
#include<string.h>
// Structure for course
struct Course
{
    char courseName[50];
    float gpa;
};
// Structure for address
struct Address
{
    char street[50];
    char city[30];
    char state[30];
    int zip;
};
// Structure for student
struct Student
{
    char name[50];
    float cgpa;
    struct Course course;
    struct Address address;
};
int main()
{
    struct Student s[2];

    // Input data for 2 students
    for (int i = 0; i < 2; i++) {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);

        printf("Course Name: ");
        scanf(" %[^\n]", s[i].course.courseName);

        printf("GPA in course: ");
        scanf("%f", &s[i].course.gpa);

        printf("Street Address: ");
        scanf(" %[^\n]", s[i].address.street);

        printf("City: ");
        scanf(" %[^\n]", s[i].address.city);

        printf("State: ");
        scanf(" %[^\n]", s[i].address.state);

        printf("ZIP Code: ");
        scanf("%d", &s[i].address.zip);
    }

    // Compare course GPA
    printf("\n--- Course GPA Comparison ---\n");
    if (s[0].course.gpa > s[1].course.gpa)
	{
        printf("%s has higher GPA in %s\n", s[0].name, s[0].course.courseName);
    }
	else if(s[1].course.gpa > s[0].course.gpa)
	{
        printf("%s has higher GPA in %s\n", s[1].name, s[1].course.courseName);
    }
	else
	{
        printf("Both students have equal GPA in the course\n");
    }

    // Compare CGPA
    printf("\n--- CGPA Comparison ---\n");
    if (s[0].cgpa > s[1].cgpa)
	{
        printf("%s has the higher CGPA\n", s[0].name);
    }
	else if(s[1].cgpa > s[0].cgpa)
	{
        printf("%s has the higher CGPA\n", s[1].name);
    } else
	{
        printf("Both students have equal CGPA\n");
    }

    return 0;
}
