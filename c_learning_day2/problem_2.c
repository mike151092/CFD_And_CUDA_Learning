//Problem to understand how different data types of C is used in CFD

#include <stdio.h>

int main()
{

	int i;
	double dt;
	double time;
	
	dt = 0.1;
	
	for (i = 1; i <= 5; i++){
	time = i * dt ;
	printf("step %d: time %f\n", i, time);
	}
	
	return 0;
	
}
