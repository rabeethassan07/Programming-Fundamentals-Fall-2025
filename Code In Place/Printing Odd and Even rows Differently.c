#include<stdio.h>
int main()
{
    int a[4][4];
    int i, j;
    
    for(i = 0; i < 4; i++)
	{
        for(j = 0; j < 4; j++)
		{
            scanf("%d", &a[i][j]);
        }
    }

    // Output
    // even row forward
    for(i = 0; i < 4; i++)
	{
        if(i % 2 == 0)
		{
		   
            for(j = 0; j < 4; j++)
			{
                printf("%d,", a[i][j]);
            }
        }
        else // odd row backward
		{             
            for(j = 3; j >= 0; j--)
			{
                printf("%d,", a[i][j]);
            }
        }
    }
    return 0;
}
