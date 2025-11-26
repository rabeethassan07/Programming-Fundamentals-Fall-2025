//To Calculate Simple Interest
#include<stdio.h>
int main()
{
	float principal,rate,time;
	float rate_dec, SimInt;
	
	printf("Enter principal: ");
	scanf("%f", &principal);
	if (principal >= 100 && principal <= 1000000)
	{
		printf("Enter Rate of Interest (5%% to 10%%): ");
		scanf("%f", &rate );
		if (rate >= 5 && rate <=10 )
		{

			printf("Enter time period (1-10 Years): ");
			scanf("%f", &time);	
			if (time >= 1 && time <= 10)
			{
				rate_dec = rate/100;
				SimInt = principal * rate_dec * time;
	    		printf("Simple Interest: %.2f", SimInt);
	    	}
	    	else printf("Enter valid time.");
	    	
		}
		else printf("Enter valid rate.");		
	}
	else printf("Enter valid principal.");
}
