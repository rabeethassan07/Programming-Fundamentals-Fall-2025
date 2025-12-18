#include<stdio.h>
#include<string.h>
void zigzagConvert(char str[], int rows)
{
    if (rows == 1)
	{
        printf("%s\n", str);
        return;
    }

    char zigzag[rows][100];
    int index[rows];

    // Initialize row indices
    for (int i = 0; i < rows; i++)
        index[i] = 0;

    int currentRow = 0;
    int direction = 1; // 1 = down, -1 = up

    for (int i = 0; str[i] != '\0'; i++)
	{
        zigzag[currentRow][index[currentRow]++] = str[i];

        // Change direction at top or bottom
        if (currentRow == 0)
            direction = 1;
        else if (currentRow == rows - 1)
            direction = -1;

        currentRow += direction;
    }

    // Print result
    printf("Zigzag Output: ");
    for (int i = 0; i < rows; i++)
	{
        zigzag[i][index[i]] = '\0';
        printf("%s", zigzag[i]);
    }
    printf("\n");
}

int main()
{
    char str[100];
    int rows;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    zigzagConvert(str, rows);

    return 0;
}
