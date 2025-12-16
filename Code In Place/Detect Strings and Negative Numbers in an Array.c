#include<stdio.h>
#include<string.h>
int isDigit(char ch)
{
    return (ch >= '0' && ch <= '9');
}

int isNumber(char str[])
{
    int i = 0;

    // Check for negative sign
    if (str[0] == '-')
	{
        i = 1;
        if (str[1] == '\0')  // only "-"
            return 0;
    }

    for (; str[i] != '\0'; i++)
	{
        if (!isDigit(str[i]))
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    char arr[10][20];  // array of strings

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
	{
        printf("Enter element %d: ", i + 1);
        scanf("%s", arr[i]);
    }

    printf("\nAnalysis:\n");

    for (int i = 0; i < n; i++)
	{
        if (isNumber(arr[i]))
		{
            if (arr[i][0] == '-')
                printf("%s ? Negative number\n", arr[i]);
            else
                printf("%s ? Positive number\n", arr[i]);
        }
		else
		{
            printf("%s ? Character / Invalid input\n", arr[i]);
        }
    }
    return 0;
}
