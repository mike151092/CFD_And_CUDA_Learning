// problem to understand working of arrays in CFD

#include <stdio.h>

int main()
{

	double dx = 0.1;
	double x[5];
	double T[5];
	int i;
	
	for (i = 0 ; i < 5; i++){
	x[i] = i * dx;
	T[i] = 300.0 + 20.0 * x[i];
	}
	
	for (i = 0 ; i < 5; i++){
	printf(" At Position %.2f the temperature T = %.2f\n", x[i], T[i]);
	}
	
	return 0;
	
}
