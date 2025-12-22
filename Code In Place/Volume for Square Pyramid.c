#include<stdio.h>
int main()
{
    float a, h, V;

    printf("Enter value of a: ");
    scanf("%f", &a);

    printf("Enter value of h: ");
    scanf("%f", &h);

    V = (a * a * h) / 3;

    printf("Volume = %.2f\n", V);
    return 0;
}
