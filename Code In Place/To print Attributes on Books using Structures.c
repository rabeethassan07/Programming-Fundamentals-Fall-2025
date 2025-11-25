// To print Attributes on Books using Structures
#include<stdio.h>
struct Book
{
    char title[50];
    char author[50];
    float price;
};
int main()
{
    struct Book b1 = {"Harry Porter", "Pride and Prejudice", 999.50};

    printf("Title: %s\n", b1.title);
    
    printf("Author: %s\n", b1.author);
    
    printf("Price: %.2f\n", b1.price);

    return 0;
}
