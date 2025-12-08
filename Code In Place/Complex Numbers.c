#include<stdio.h>

typedef struct
{
   float real;
   float img;
} complex;

complex inputComplex(int);
complex addComplex(complex,complex);
complex multiComplex(complex,complex);

int main()
{
  printf("Add and Multiply two Complex Number\n");
  
  complex c1 = inputComplex(1);
  complex c2 = inputComplex(2);
  complex add = addComplex(c1,c2);
  
  printf("The Addition of two Complex Numbers is %.2f + %.2fi",add.real,add.img);
  complex multi = multiComplex(c1,c2);
  
  printf("\nThe Multiplication of two Complex Numbers is %.2f + %.2fi",multi.real,multi.img);
}

complex inputComplex(int n)
{
    complex c;
      
    printf("Enter Complex %d Real Part: ",n);
    scanf("%f",&c.real);
	  
    printf("Enter Complex %d Imaginary Part: ",n);
    scanf("%f",&c.img);
    return c;
    
}

complex addComplex(complex c1,complex c2)
{
   complex c;
   c.real = c1.real+ c2.real;
    c.img = c1.img+ c2.img;
   return c; 
}

complex multiComplex(complex c1,complex c2)
{
   complex c;
   c.real = (c1.real*c2.real) - (c1.img*c2.img) ;
    c.img = (c1.real*c2.img) + (c1.img*c2.real);
   return c; 
}
