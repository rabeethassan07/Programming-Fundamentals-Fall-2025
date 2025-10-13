// Day and Activity Planner
#include <stdio.h>
int main() 
{
    int day;
    char time;

    // For Input
    printf("Enter day of the week (1 = Monday, ..., 7 = Sunday): ");
    scanf("%d", &day);

    switch (day) {
        // For Weekdays (1–5)
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Enter time (M = Morning, E = Evening): ");
            scanf(" %c", &time);
           
		    switch (time)
		    {
                case 'M':
                	
                case 'm':
                	
                    printf("Go to Class\n");
                    
                    break;
                    
                case 'E':
                	
                case 'e':
                	
                    printf("Do Homework\n");
                    
                    break;
                
				default:
                    printf("Invalid time entered.\n");
            }
            break;

        // For Weekends (6–7)
        case 6:
        case 7:
            printf("Enter time (M = Morning, E = Evening): ");
            scanf(" %c", &time);
            switch (time) 
			{
                case 'M':
                	
                case 'm':
                	
					printf("Play Sports\n");
					
                    break;
                    
                case 'E':
                	
                case 'e':
                	
                    printf("Watch A Movie\n");
                    
                    break;
                    
                default:
                    printf("Invalid time entered.\n");
            }
            break;

        // Invalid input
        default:
            printf("Youe Input is Invalid !\n");
    }

}

