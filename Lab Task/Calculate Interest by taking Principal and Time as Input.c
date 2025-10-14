// Calculate Interest by taking Principal and Time as Input
#include <stdio.h>
int main() 
{
    float principal, rate, time, simpleInterest;

    // Input Principal Amount
    printf("Enter Principal amount (100 to 1000000): ");
    scanf("%f", &principal);

    if (principal < 100 || principal > 1000000) 
	{
        printf("Error: Principal must be between Rs. 100 and Rs. 1,000,000.\n");
        return 0;
    }

    // Input Rate
    printf("Enter Rate of Interest (5 to 10): ");
    scanf("%f", &rate);

    if (rate < 5 || rate > 10) 
	{
        printf("Error: Rate of interest must be between 5%% and 10%%.\n");
        return 0;
    }

    // Input Time
    printf("Enter Time period in years (1 to 10): ");
    scanf("%f", &time);

    if (time < 1 || time > 10) 
	{
        printf("Error: Time period must be between 1 and 10 years.\n");
        return 0;
    }

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    printf("\n--- Simple Interest Details ---\n");
    printf("Principal: Rs. %.2f\n", principal);
    printf("Rate: %.2f%%\n", rate);
    printf("Time: %.2f years\n", time);
    printf("Simple Interest: Rs. %.2f\n", simpleInterest);
}

