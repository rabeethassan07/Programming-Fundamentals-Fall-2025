#include<stdio.h>
int main()
{
    char firstName[50], lastName[50], fullName[101];
    int i = 0, j = 0, count = 0;

    // Input first and last name
    printf("Enter first name: ");
    scanf("%s", firstName);

    printf("Enter last name: ");
    scanf("%s", lastName);

    // Copy first name into fullName
    while (firstName[i] != '\0')
	{
        fullName[i] = firstName[i];
        i++;
        count++;
    }

    // Add space between names
    fullName[i] = ' ';
    i++;
    count++;

    // Copy last name into fullName
    while (lastName[j] != '\0')
	{
        fullName[i] = lastName[j];
        i++;
        j++;
        count++;
    }

    // Null terminate fullName
    fullName[i] = '\0';

    // Output
    printf("\nFull Name: %s\n", fullName);
    printf("Total number of characters: %d\n", count);
    return 0;
}
