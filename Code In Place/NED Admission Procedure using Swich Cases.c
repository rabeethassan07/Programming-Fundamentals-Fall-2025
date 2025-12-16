#include<stdio.h>
// Function prototypes
void enterDetails();
void checkEligibility();
void calculateMerit();

float matric, inter, test;
int detailsEntered = 0;

int main()
{
    int choice;

    do {
        printf("\n--- NED Admission System ---\n");
        printf("1. Enter Student Details\n");
        printf("2. Check Eligibility\n");
        printf("3. Calculate Merit\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
		{
            case 1:
                enterDetails();
                break;

            case 2:
                checkEligibility();
                break;

            case 3:
                calculateMerit();
                break;

            case 4:
                printf("Exiting system...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
// Function to enter student details
void enterDetails()
{
    printf("Enter Matric percentage: ");
    scanf("%f", &matric);

    printf("Enter Intermediate percentage: ");
    scanf("%f", &inter);

    printf("Enter Entry Test score: ");
    scanf("%f", &test);

    detailsEntered = 1;
}
// Function to check eligibility
void checkEligibility()
{
    if (!detailsEntered)
	{
        printf("Please enter details first.\n");
        return;
    }

    if (matric >= 60 && inter >= 60 && test >= 50)
	{
        printf("Student is ELIGIBLE for admission.\n");
    }
	else
	{
        printf("Student is NOT eligible for admission.\n");
    }
}

// Function to calculate merit
void calculateMerit()
{
    float merit;

    if (!detailsEntered)
	{
        printf("Please enter details first.\n");
        return;
    }

    merit = (matric * 0.3) + (inter * 0.4) + (test * 0.3);

    printf("Merit Score: %.2f\n", merit);

    if (merit >= 70)
        printf("High chance of admission.\n");
    else if (merit >= 60)
        printf("Medium chance of admission.\n");
    else
        printf("Low chance of admission.\n");
}
