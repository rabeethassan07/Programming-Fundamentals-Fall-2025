#include<stdio.h>
int main()
{
    FILE *fp;
    float a, b, c;
    float sum1 = 0, sum2 = 0, sum3 = 0;

    // Open file
    fp = fopen("budge.txt", "r");
    if (fp == NULL)
	{
        printf("Error opening file.\n");
        return 1;
    }

    // Read values and add column-wise
    while (fscanf(fp, "%f %f %f", &a, &b, &c) == 3)
	{
        sum1 += a;
        sum2 += b;
        sum3 += c;
    }

    fclose(fp);

    // Display result
    printf("Column sums are: %.2f %.2f %.2f\n", sum1, sum2, sum3);
    return 0;
}
