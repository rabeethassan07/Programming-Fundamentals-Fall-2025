#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float root1,root2;
	
 	printf("Quadratic Formula!!!\n");
 	
 	printf("Enter the value of a:");
 	scanf("%f",&a);
 	
	printf("Enter the value of b:");
	scanf("%f",&b);
	
	printf("Enter the value of c:");
	scanf("%f",&c);

 float discriminant = (b*b) - (4*a*c);

 if(a!=0)
 {
	if(discriminant>0)
	{
		root1 = (-b + sqrt(discriminant)) / (2*a);
		root2 = (-b - sqrt(discriminant)) / (2*a);
	
	printf("The Root1 is: %.2f\nThe Root2 is: %.2f",root1,root2);
	}
	else if(discriminant==0)
	{
		root1 = (-b) / (2*a);
		printf("The Root is: %.2f",root1);
	}
	else
	{
   		float real,img;
   
		real = (-b) /( 2*a);
   		img = (sqrt(-discriminant)) / (2*a);
   		printf("The root1 is %.2f+%.2fi\n",real,img);
   		printf("The root2 is %.2f-%.2fi",real,img);
	}
 }
 else
 {
  printf("This is not the Quadratic Equation");
 }
  return 0;
}
