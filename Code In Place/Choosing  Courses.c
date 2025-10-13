//C program to Choose Courses
#include <stdio.h>
int main() {
    int program, year;

    printf("Select Program Type:\n");
    
	printf("1. Computer Science\n");
    
	printf("2. Electrical Engineering\n");
    
	printf("Enter your choice (1 or 2): ");
    
	scanf("%d", &program);

    switch (program) 
	{
        case 1: // Computer Science
            
			printf("You selected Computer Science.\n");
           
		    printf("Enter Year (1 = First Year, 2 = Second Year): ");
           
		    scanf("%d", &year);

            switch (year) 
			{
                case 1:
                    printf("Courses for Computer Science (First Year):\n");
                    printf("1. Programming Fundamentals\n");
                    printf("2. Calculus\n");
                    printf("3. ITFA \n");
                    break;

                case 2:
                    printf("Courses for Computer Science (Second Year):\n");
                    printf("1. Data Structures\n");
                    printf("2. Object-Oriented Programming\n");
                    printf("3. Discrete Mathematics\n");
                    break;

                default:
                    printf("Invalid year selection.\n");
            }
            break;

        case 2: // Electrical Engineering
            printf("You selected Electrical Engineering.\n");
            
			printf("Enter Year (1 = First Year, 2 = Second Year): ");
            
			scanf("%d", &year);

            switch (year) 
			{
                case 1:
                    printf("Courses for Electrical Engineering (First Year):\n");
                    printf("1. Basic Electrical Engineering\n");
                    printf("2. Semiconductor Electronics\n");
                    printf("3. Circuits courses\n");
                    break;

                case 2:
                    printf("Courses for Electrical Engineering (Second Year):\n");
                    printf("1. Circuit Analysis\n");
                    printf("2. Electronics I\n");
                    printf("3. Signals and Systems\n");
                    break;

                default:
                    printf("Invalid year selection.\n");
            }
            break;

        default:
            printf("Your Input is Invalid !!.\n");
    }

}

