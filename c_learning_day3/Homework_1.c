// problem to understand working of arrays in CFD

#include <stdio.h>

int main()
{

	double dx = 0.1;
	double x[5];
	double T[5];
	double grad_T[4];
	int i;
	
	for (i = 0 ; i < 5; i++){
	x[i] = i * dx;
	T[i] = 300.0 + 20.0 * x[i];
	}
	
	for (i = 0; i < 4; i++){
	grad_T[i]= (T[i+1] - T[i]) / dx;
	}
	
	for (i = 0; i < 4; i++){
	printf("The temperature gradient at grid point %.2f is = %.2f\n", x[i], grad_T[i]);
	}
	
	return 0;
	
}
