#include<stdio.h>
void student();
int main()
{
    struct STUDENTS
	{
        int roll_nmbr;
        
        char name[100];
        
        char section;
        
        float marks;
    };
    void(S1.a,S2.b);
}
    void student ()
	{
        struct student S[60];
        
           for(int i=0;i<60;i++)
		   {
              scanf("%d %s %f",S[i].roll_nmbr,S[i].name,S[i].marks);
           }
    } 
