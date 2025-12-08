#include<stdio.h>
#include<string.h>
int main(
){
	char str1[25];
	char str2[25];
	
	printf("Enter First String: ");
	gets(firstName);
	
	printf("Enter Second String: ");
	gets(lastName);
	
	if(strcmp(str1,str2)==0)
	  printf("Given Strings are Equal");
	else  
	  printf("Given Strings are Not Equal");
	  
	return 0;
}
