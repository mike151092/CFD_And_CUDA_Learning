// problem to understand the precision difference with the data type double and float

#include<stdio.h>

int main()

{

	int i;
	float dt;
	double time;
	
	dt = 0.1;
	
	for(i = 1; i <= 5; i++){
	time = i * dt ;
	printf("step %d: time %f\n", i, time);
	}
	
	return 0;
	
}
