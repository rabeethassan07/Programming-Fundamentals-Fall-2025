#include<stdio.h>
struct Employee
{
    char name[50];
    int id;
    float salary;
    char department[50];
};
int main()
{
    struct Employee emp[5];

    // Input employees
    for (int i = 0; i < 5; i++)
	{
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", emp[i].name);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);

        printf("Enter department: ");
        scanf("%s", emp[i].department);

        printf("\n");
    }

    // Find highest salary
    int maxIndex = 0;
    
    for (int i = 1; i < 5; i++)
	{
        if (emp[i].salary > emp[maxIndex].salary)
            maxIndex = i;
    }

    // Print highest salary employee
    printf("\nEmployee with highest salary:\n");
    
    printf("Name: %s\n", emp[maxIndex].name);
    
    printf("ID: %d\n", emp[maxIndex].id);
    
    printf("Salary: %.2f\n", emp[maxIndex].salary);
    
    printf("Department: %s\n", emp[maxIndex].department);

    return 0;
}
