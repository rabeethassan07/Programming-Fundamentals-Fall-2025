// EID Discount Calculator
#include <stdio.h>
int main() 
{
    float cost, discount = 0, finalAmount, savedAmount;

    printf("Enter total shopping amount: ");
    scanf("%f", &cost);

    // Check for invalid or negative input
    if (cost <= 0) 
	{
        printf("Invalid amount! Please enter a positive value.\n");
        return 0;
    }

    // Applying discount conditions
    if (cost < 2000) 
	{
        discount = 0;  // no discount
    }

    if (cost >= 2000 && cost <= 4000) 
	{
        discount = 0.20;
    }

    if (cost >= 4001 && cost <= 6000) 
	{
        discount = 0.30;
    }

    if (cost > 6000) 
	{
        discount = 0.50;
    }

    // Calculate saved and final amounts
    savedAmount = cost * discount;
    finalAmount = cost - savedAmount;

    // Display results
    printf("\nActual Amount: Rs. %.2f\n", cost);
    printf("Discount Applied: %.0f%%\n", discount * 100);
    printf("You Saved: Rs. %.2f\n", savedAmount);
    printf("Amount After Discount: Rs. %.2f\n", finalAmount);

}

