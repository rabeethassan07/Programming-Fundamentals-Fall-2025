//find the difference between the sum of elements at even index to that of at odd index
#include<stdio.h>
int main()
{
    int arr[9] = {12, 7, 25, 18, 33, 4, 9, 42, 15};  // 9 random numbers
    int sumEven = 0;  // sum of even indices
    int sumOdd = 0;   // sum of odd indices

    for (int i = 0; i < 9; i++)
	{
        if (i % 2 == 0)
		{
            sumEven += arr[i];
        }
		else
		{
            sumOdd += arr[i];
        }
    }

    int result = sumEven - sumOdd;
    printf("Difference between even-index and odd-index sums = %d\n", result);
}
