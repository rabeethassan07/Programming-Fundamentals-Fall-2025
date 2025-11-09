// String Copy
#include <stdio.h>
#include <string.h>
int main()
{
    char firstName[50], lastName[50], fullName[100];

    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your last name: ");
    scanf("%s", lastName);

    strcpy(fullName, firstName);   //copying first name into fullName
    strcat(fullName, " ");         //adding a space between names
    strcat(fullName, lastName);    //adding last name

    printf("Your full name is: %s\n", fullName);
    
}
