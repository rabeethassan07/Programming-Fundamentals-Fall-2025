// Program to Find Area using Structures
#include<stdio.h>
int areaofrect(int length, int breadth)
{
    int area;
    area =  length*breadth;
    return area;
}
int main()
{
    int l, b;
    
    printf("Enter the value of Length:	\n");
    scanf("%d",&l);
    
    printf("Enter the value of Breadth: 	\n");
    scanf("%d",&b);
    
    int area = areaofrect(l,b);
    printf("%d\n",area);
}
