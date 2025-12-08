#include<stdio.h>
int main()
{
  long num;
  
  printf("Strong Number Checker\n");
  
  printf("Enter the Number:");
  scanf("%d",&num);

  long originalNum = num;
  long sum = 0;

  while (num!=0)
  {
    long fact = 1;
    long digit = num % 10 ;
    
    for(long i=digit;i>1;i--)
	{
       fact *= i;
    }
    sum += fact;
    num /=10;
  }

  if(originalNum == sum)
  {
    printf("The Given Number is Strong Number");
  }
  else
  {
    printf("The Given Number is not a Strong Number");
  }
  
}
