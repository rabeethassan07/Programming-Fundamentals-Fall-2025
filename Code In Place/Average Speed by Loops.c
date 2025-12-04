//Average Speed
#include<stdio.h>
int main()
{
	int time;
	float dist;
	float totalDis = 0; 
	
	printf("Total time travelled (in hours): ");
	scanf("%d", &time);
	
	if (time >= 1 && time <= 5)
	{
		for (int i = 1; i <= time; i++)
		{
			printf("Enter distance travelled for hour %d: ", i);
			scanf("%f", &dist);
			if (dist < 0)
			{
				printf("Enter valid distance.");
				return 1; // so code stops
			}
			else totalDis += dist;	
		}
	
		float avg_speed = totalDis / time;
		
		printf("Average speed of Car (miles per hour): %.2f", avg_speed);
	}
	else printf("Enter valid time.");
	return 0;
}
