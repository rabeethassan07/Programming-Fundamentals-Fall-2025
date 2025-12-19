#include<stdio.h>
int main()
{
    int types, qty;
    char choice;
    int total = 0;

    printf("Menu:\n");
    printf("B = Burger (Rs. 200)\n");
    printf("F = French Fries (Rs. 50)\n");
    printf("P = Pizza (Rs. 500)\n");
    printf("S = Sandwich (Rs. 150)\n\n");

    printf("Enter number of snack types you want to order (2, 3, or 4): ");
    scanf("%d", &types);

    // Validation using IF
    if (types < 2 || types > 4)
	{
        printf("Invalid number of snack types.\n");
        return 0;
    }

    for (int i = 1; i <= types; i++)
	{
        printf("\nEnter choice for item %d (B/F/P/S): ", i);
        scanf(" %c", &choice);   // space before %c is important

        printf("Enter quantity: ");
        scanf("%d", &qty);

        // Using switch for item selection
        switch (choice) {
            case 'B':
            case 'b':
                total += 200 * qty;
                break;

            case 'F':
            case 'f':
                total += 50 * qty;
                break;

            case 'P':
            case 'p':
                total += 500 * qty;
                break;

            case 'S':
            case 's':
                total += 150 * qty;
                break;

            default:
                printf("Invalid choice! Skipping this item.\n");
        }
    }

    printf("\nTotal charges: Rs. %d\n", total);

    return 0;
}
