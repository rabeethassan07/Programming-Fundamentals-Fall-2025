// Print Attributes of Books Entered by User using Structures
#include<stdio.h>
struct Book
{
    char title[50];
    char author[50];
    float price;
};
int main()
{
    struct Book books[3];

    // Input
    for (int i = 0; i < 3; i++)
	{
        printf("Enter title of book %d: ", i + 1);
        scanf("%s", books[i].title);

        printf("Enter author of book %d: ", i + 1);
        scanf("%s", books[i].author);

        printf("Enter price of book %d: ", i + 1);
        scanf("%f", &books[i].price);

        printf("\n");
    }

    // Print
    printf("Books Entered:\n");
    
    for (int i = 0; i < 3; i++)
	{
        printf("Book %d -> Title: %s, Author: %s, Price: %.2f\n",
               i + 1, books[i].title, books[i].author, books[i].price);
    }

    return 0;
}
