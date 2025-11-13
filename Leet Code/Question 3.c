#include <stdio.h>
int main()
{
    int num1[] = {2, 4, 3};  // represents 342 (reversed)
    int num2[] = {5, 6, 4};  // represents 465 (reversed)
    int size1 = 3;
    int size2 = 3;

    int result[10]; // big enough to hold result digits
    int carry = 0;
    int i = 0;
    int j = 0;
    int k = 0;

    // Add digits one by one
    while (i < size1 || j < size2 || carry > 0)
    {
        int x = (i < size1) ? num1[i] : 0;
        int y = (j < size2) ? num2[j] : 0;

        int sum = x + y + carry;
        result[k] = sum % 10;  // store the single digit
        carry = sum / 10;      // store carry for next position

        i++;
        j++;
        k++;
    }

    // Print result (which is stored in reverse order)
    printf("Result (reversed digits): ");
    for (int t = 0; t < k; t++)
    {
        printf("%d ", result[t]);
    }

    // If you want to print the number in correct order:
    printf("\nResult (normal order): ");
    for (int t = k - 1; t >= 0; t--)
    {
        printf("%d", result[t]);
    }

    printf("\n");
}
