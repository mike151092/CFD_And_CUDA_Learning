// program to understand use of functions in C program

#include <stdio.h>

double compute_distance(double velocity, double time) //function assignment
{
	return velocity * time;

}

int main()

{

	int i;
	double dt = 0.1;
	double velocity = 10.0;
	double time, distance;
	
	for (i = 1; i <= 5; i++)
	{
		time = i * dt;
		distance = compute_distance(velocity, time);
		printf("step %d: time %f: distance %f\n", i, time, distance);
	}
	
	return 0;
	
} 
