// Selecting College program
#include<stdio.h>
int main()
{
	int num1, num2;
	printf("Enter program:\n1.Computer Science\n2.Electrical Engineering\n");
	scanf("%d", &num1);
	
	switch(num1)
	{
		case 1:
			printf("1. First Year\n2. Second Year\n");
			scanf("%d", &num2);
			switch(num2)
			{
				case 1:
                    printf("Courses:\n1. ITFA\n2.Programming Fundamentals\n3. Islamiat");
				    break;
				case 2:
					printf("Courses:\n1. Calculus\n2. Data Structures\n3. ICP");
				    break;
				default: printf("Invalid.");
			}
			break;
									
		case 2:
			printf("1. First Year\n2. Second Year\n");
			scanf("%d", &num2);
			switch(num2)
			{
				case 1:
					printf("Courses:\n1.ITFA\2.Basic Electrical Engineering\n3.Calculus");
				    break;
				case 2:
					printf("Courses:\n1. Multi Variable Calculus\n2. Electronic Devices and Circuits\n3. Data Structures");
			        break;
				default: printf("Invalid.");			
		    }
		    break; 
		default: printf("Invalid.");
	}
}
