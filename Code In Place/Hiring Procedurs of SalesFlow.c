#include<stdio.h>
void assignPosition(int marks)
{
    int experience;

    if (marks < 50)
	{
        printf("Candidate is not selected.\n");
    }
    else if (marks >= 50 && marks < 60)
	{
        printf("Selected as Trainee Engineer.\n");
    }
    else
	{
        // Ask experience only if marks >= 60
        printf("Enter years of experience: ");
        scanf("%d", &experience);

        if (marks >= 70 && experience >= 2)
		{
            printf("Selected as Associate Developer.\n");
        }
        else if (marks >= 60 && experience >= 1)
		{
            printf("Selected as Assistant Developer.\n");
        }
        else 
		{
            printf("Candidate does not meet experience requirement.\n");
        }
    }
}
int main()
{
    int marks;

    printf("Enter test marks: ");
    scanf("%d", &marks);

    assignPosition(marks);
    return 0;
}
