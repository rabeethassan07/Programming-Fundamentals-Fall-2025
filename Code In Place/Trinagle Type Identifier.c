// Triangle Type Identifier
#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the First side of the Triangle: ");
    scanf("%f", &a);

    printf("Enter the Second side of the Triangle: ");
    scanf("%f", &b);

    printf("Enter the Third side of the Triangle: ");
    scanf("%f", &c);

    //Whether it forms a valid triangle
    if ((a + b > c) && (b + c > a) && (a + c > b)) 
	{
        printf("This is a valid Triangle.\n");

        // Type of Triangle
        if (a == b && b == c) 
		{
            printf("It is an Equilateral Triangle.\n");
        } 
		else if (a == b || b == c || c == a)
		{
            printf("It is an Isosceles Triangle.\n");
        }
		 else 
		{
            printf("It is a Scalene Triangle.\n");
        }

    } 
	else 
	{
        printf("This is not a valid Triangle.\n");
    }

    return 0;
}

