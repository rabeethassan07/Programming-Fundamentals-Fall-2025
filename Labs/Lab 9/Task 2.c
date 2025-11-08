#include <stdio.h>
int main( )
{
 int y = 5,z=6;
 int const *yPtr = &y;
 printf("%p\n", yPtr);
// *yPtr = &z;    This line gives an error because we are reassigning an aadress to a constant pointer which is not allowed
// printf("%p\n", yPtr);
}
