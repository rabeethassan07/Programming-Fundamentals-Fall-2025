#include<stdio.h>
float sum(float *a,float *b);
void userInput(float *num1,float *num2);

int main(
{
	float result,num1,num2;
	result = sum(&num1,&num2);
	printf("The Sum is %.2f",result);
	return 0;
}

void userInput(float *num1,float *num2
{
  printf("Find the Sum Of the Two Numbers\n");
  printf("Enter First Number:");
  scanf("%f",num1);	
  printf("Enter Second Number:");
  scanf("%f",num2);
}
float sum(float *a,float *b){
    userInput(a,b);
	printf("%f\n",*a);
    printf("%f\n",*b);
	return (*a) + (*b);
}
