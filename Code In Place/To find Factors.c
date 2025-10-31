#include <stdio.h>
int main() 
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factor pairs of %d are:\n", n);

    for (i = 1; i <= n; i++) 
	{
        if (n % i == 0) 
		{
            printf("(%d, %d) ", i, n / i);
        }
    }

    printf("\n");

}

