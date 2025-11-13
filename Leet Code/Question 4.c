#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    // Negative numbers cannot be palindromes
    if (x < 0) {
        printf("false\n");
        return 0;
    }

    int original = x;   // keep a copy of the original number
    int reversed = 0;   // to store reversed digits

    // Reverse the number
    while (x != 0) {
        int digit = x % 10;            // get last digit
        reversed = reversed * 10 + digit; // build reversed number
        x = x / 10;                    // remove last digit
    }

    // Compare original with reversed
    if (original == reversed)
        printf("true\n");
    else
        printf("false\n");

}
