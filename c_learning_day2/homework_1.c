// program to compute time and velocity using the data types in C

#include <stdio.h>

int main()

{

	int i;
	double dt = 0.1;
	double time = 0.0;
	double distance = 0.0;
	double velocity = 10.0;
	
	
	for(i = 1; i <= 5; i++){
	time = i * dt;
	distance = velocity * time;
	printf("step %d: time = %.2f: distance = %.2f\n", i, time, distance);
	}
	
	return 0;
	
}
