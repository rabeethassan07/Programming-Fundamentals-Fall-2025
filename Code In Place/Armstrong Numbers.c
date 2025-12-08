#include<stdio.h>
#include<math.h>
int main()
{
  long num;
  printf("ArmStrong Number Checker\n");
  printf("Enter the Number:");
  scanf("%d",&num);

  long originalNum = num;
  long copyNum = num;
  long sum = 0;
  int power=1;
  
  while (copyNum !=0)
  {
     power++;
     copyNum /=10;
  }


  while (num!=0)
  {
    long digit = num%10;
     sum += pow(digit,power);
     num /=10;
  }

  if(originalNum == sum)
  {
    printf("The Given Number is Armstrong Number");
  }
  else
  {
    printf("The Given Number is not a Armstrong Number");
  }
  
}
