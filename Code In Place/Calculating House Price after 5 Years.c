#include<stdio.h>
int main()
{
    float houseCost, annualFuelCost, taxRate;
    float totalCost, taxPerYear;

    printf("Enter initial cost of the house: ");
    scanf("%f", &houseCost);

    printf("Enter estimated annual fuel cost: ");
    scanf("%f", &annualFuelCost);

    printf("Enter annual tax rate (in percentage): ");
    scanf("%f", &taxRate);

    // Calculate yearly tax
    taxPerYear = (taxRate / 100) * houseCost;

    // Total cost after 5 years
    totalCost = houseCost + (5 * annualFuelCost) + (5 * taxPerYear);

    printf("\nTotal cost of the house after 5 years: Rs %.2f\n", totalCost);
    return 0;
}
