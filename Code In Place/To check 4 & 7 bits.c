// 4th & 7th bit check
#include<stdio.h>
int main()
{
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	
	if ((num & 72) == 72 ) //to check if bits are on, if == 72 means bits are on in the num
	{
		printf("4th and 7th bits are on.\n");
		num = num & ~72; // ~72 inverts the bits for 72 and so becomes 0 e.g 01001000 -> 10110111
		printf("Number after 4th and 7th bits turned off: %d",num);
	}
	else printf("4th and 7th bits turned off");
}
