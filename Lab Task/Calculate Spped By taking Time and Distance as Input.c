// Calculate Spped By taking Time and Distance as Input
#include <stdio.h>
int main() 
{
    int hours, i;
    float distance, totalDistance = 0, avgSpeed;

    printf("Enter total hours the car traveled (1 to 5): ");
    scanf("%d", &hours);

    // Time
    if (hours < 1 || hours > 5) 
	{
        printf("Error: Time must be between 1 and 5 hours.\n");
        return 0;
    }

    // Input distance for each hour
    for (i = 1; i <= hours; i++) 
	{
        printf("Enter distance covered in hour %d (in miles): ", i);
        scanf("%f", &distance);

        if (distance < 0) 
		{
            printf("Error: Distance cannot be negative.\n");
            return 0;
        }

        totalDistance += distance;
    }

    // Calculate average speed
    avgSpeed = totalDistance / hours;

    printf("\nTotal Distance = %.2f miles\n", totalDistance);
    printf("Total Time = %d hours\n", hours);
    printf("Average Speed = %.2f miles/hour\n", avgSpeed);

}

