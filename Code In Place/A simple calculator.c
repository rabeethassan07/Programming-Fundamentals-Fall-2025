// C program to implement a simple calculator
#include <stdio.h>
int main() 
{
    int num1, num2;
    char operand;
    float result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operand);


    switch (operand) 
	{
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (num2 == 0)
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            else 
			{
                result = (float) num1 / num2;
                printf("Result = %.2f\n", result);
            }
            break;

        case '%':
            if (num2 == 0)
                printf("Error: Modulus by zero is not allowed.\n");
            else
                printf("Result = %d\n", num1 % num2);
            break;

        default:
            printf("Your Operator is invalid!!.\n");
    }

}

