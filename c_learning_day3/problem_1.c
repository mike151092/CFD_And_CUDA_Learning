// Program to understand arrays
//An array is: A collection of variables of the same type stored contiguously in memory

#include <stdio.h>

int main()
{

	int i;
	double T[5];
	
	for (i = 0 ; i < 5; i++){
	T[i] = 300.0 + i * 10;
	}
	
	for (i = 0 ; i < 5; i++){
	printf("T[%d] = %.2f\n", i, T[i]);
	}
	
	return 0;
	
} 
