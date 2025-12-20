#include<stdio.h>
int main()
{
    int num, temp, sum = 0, digit;
    int i, isPrime = 1;
    int reversed = 0;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    temp = num;

    // Calculate sum of digits
    while (temp != 0)
	{
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    // If sum is even ? check prime
    if (sum % 2 == 0)
	{
        if (num <= 1)
            isPrime = 0;

        for (i = 2; i <= num / 2; i++)
		{
            if (num % i == 0)
			{
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("The number is PRIME.\n");
        else
            printf("The number is NOT PRIME.\n");
    }
    // If sum is odd ? check palindrome
    else
	{
        temp = num;
        while (temp != 0)
		{
            reversed = reversed * 10 + (temp % 10);
            temp /= 10;
        }

        if (reversed == num)
            printf("The number is PALINDROME.\n");
        else
            printf("The number is NOT PALINDROME.\n");
    }

    return 0;
}
