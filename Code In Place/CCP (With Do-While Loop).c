#include<stdio.h>
#include<string.h>
int main()
{
    int d, i = 0;
    printf("Enter number of people: ");
    scanf("%d", &d);
    
    char citizen[d][20];
    int age[d], gender[d], cnic[d], status[d], working[d], jobType[d];

    // INPUT SECTION (while loop)
    while (i < d)
    {
        printf("\n--- Person %d ---\n", i + 1);

        printf("Do you possess Citizenship of which country? ");
        scanf("%s", citizen[i]);

        printf("Enter Age: ");
        scanf("%d", &age[i]);
        
        printf("Enter your Gender (1=Male, 2=Female): ");
        scanf("%d", &gender[i]);

        printf("Do you have a CNIC? (1=Yes, 2=No): ");
        scanf("%d", &cnic[i]);

        printf("Enter Status (1=Abroad, 2=In Country): ");
        scanf("%d", &status[i]);

        printf("Are you Working? (1=Yes, 2=No): ");
        scanf("%d", &working[i]);

        if (working[i] == 1)
        {
            printf("If working, enter job type (1=Government, 2=Private): ");
            scanf("%d", &jobType[i]);
        }
        else
        {
            jobType[i] = 0;
        }

        i++;
    }

    printf("\n===== Voting Eligibility Results =====\n");

    // OUTPUT SECTION (using do-while loop)
    i = 0;

    do
    {
        printf("\nPerson %d:\n", i + 1);
        printf("Citizen: %s | Age: %d | CNIC: %s | Status: %s\n",
               citizen[i],
               age[i],
               cnic[i] == 1 ? "Yes" : "No",
               status[i] == 1 ? "Abroad" : "In Country");

        if (strcmp(citizen[i], "Pakistan") == 0 && age[i] >= 18 && age[i] < 110 && cnic[i] == 1)
        {
            printf(" Eligible to Vote\n");
        }
        else
        {
            printf(" Not Eligible to Vote\n");
        }

        if (working[i] == 1)
        {
            if (jobType[i] == 1)
                printf("Employment: Government Worker\n");
            else if (jobType[i] == 2)
                printf("Employment: Private Worker\n");
        }
        else
        {
            printf("Employment: Jobless\n");
        }

        i++;

    } while (i < d);
    return 0;
}
