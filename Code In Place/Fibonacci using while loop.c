//fibonacci using while loop
#include<stdio.h>
int main()
{
	int first = 0, sec = 1, next;
	
	printf("%d, %d, ", first, sec);
	
	while(next < 1000)
	{
		next = first + sec;
		if (next > 1000)
		{
			break;
		}		
		printf("%d, ", next);
		first = sec;
		sec = next;
	}
}
