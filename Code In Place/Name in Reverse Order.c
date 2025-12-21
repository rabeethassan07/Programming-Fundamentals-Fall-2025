#include<stdio.h>
#include<string.h>
int main()
{
    char first[50], last[50], full[101];
    int length;

    // Input first and last name
    printf("Enter first name: ");
    scanf("%s", first);

    printf("Enter last name: ");
    scanf("%s", last);

    // Combine names with space
    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);

    // Find length
    length = strlen(full);

    // Print full name
    printf("Full name: %s\n", full);

    // Print reversed full name
    printf("Full name in reverse: ");
    for (int i = length - 1; i >= 0; i--)
	{
        printf("%c", full[i]);
    }
    printf("\n");
    return 0;
}
