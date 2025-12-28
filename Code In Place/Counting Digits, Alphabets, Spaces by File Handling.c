#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int digits = 0, alphabets = 0, spaces = 0;

    // Open file in read mode
    fp = fopen("input.txt", "r");

    if (fp == NULL)
	{
        printf("Error opening file.\n");
        return 1;
    }
    // Read character by character
    while ((ch = fgetc(fp)) != EOF)
	{

        if (ch >= '0' && ch <= '9')
		{
            digits++;
        }
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		{
            alphabets++;
        }
        else if (ch == ' ')
		{
            spaces++;
        }
    }

    fclose(fp);

    // Display results
    printf("Total Digits: %d\n", digits);
    printf("Total Alphabets: %d\n", alphabets);
    printf("Total Spaces: %d\n", spaces);
    return 0;
}
