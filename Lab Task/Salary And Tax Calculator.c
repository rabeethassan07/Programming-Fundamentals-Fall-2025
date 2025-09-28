// Salary And Tax Calculator
#include <stdio.h>
int main() {
    float salary, taxRate, tax, netSalary;

    // Input salary
    printf("Enter your salary: ");
    scanf("%f", &salary);

    // Input tax rate
    printf("Enter tax rate (in percentage): ");
    scanf("%f", &taxRate);

    // Calculate tax and net salary
    tax = (salary * taxRate) / 100;
    netSalary = salary - tax;

    printf("\n--- Tax Calculation ---\n");
    printf("Salary before Tax: %f\n", salary);
    printf("Tax Rate: %f\n", taxRate);
    printf("Tax Amount: %f\n", tax);
    printf("Salary after Tax: %f\n", netSalary);

    return 0;
}

