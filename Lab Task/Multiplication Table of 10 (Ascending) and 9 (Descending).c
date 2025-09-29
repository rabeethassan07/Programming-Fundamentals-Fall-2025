// Multiplication Table of 10 (Ascending) and 9 (Descending)
#include <stdio.h>
int main() 
{
    int i, j;

    j = 12; // start 9's table from 12

    for (i = 1; i <= 12; i++, j--) 
	{
        printf("10 x %d = %d\n", i, 10 * i);
        
        printf("9 x %d = %d\n", j, 9 * j);
        
        printf("\n"); // Space for cleanliness
    }

}

