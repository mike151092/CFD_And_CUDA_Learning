// program to pass array into functions

#include <stdio.h>

void compute_time(int N, double time[], double dt) //function to compute time
{
	int i;
	for (i = 0; i < N; i++)
	{
		time[i] = i * dt;
	}
	
}

void compute_temperature(int N, double T[]) //function to compute temperature
{
	int i;
	for (i = 0; i < N; i++)
	{
		T[i] = 300.0 +10.0 * i;
	}
}
		

void compute_gradient(double T[], double gradT[], int N, double dx) //function to compute gradient of temperature.
{
	int i;
	gradT[0] = (T[1] - T[0]) / dx;           // forward difference
    	for (i = 1; i < N-1; i++)
    	{
        	gradT[i] = (T[i+1] - T[i]) / dx;
    	}
    	gradT[N-1] = (T[N-1] - T[N-2]) / dx;     // backward difference
}

	

int main()
{

	int i;
	int N = 5;
	double dt = 0.1;
	double dx = 0.1;
	
	double time[5];
	double T[5];
	double gradT[5];
	
	compute_time(N, time, dt); //computes time
	compute_temperature(N, T); //computes temperature field
	compute_gradient(T, gradT, N, dx); //computes the gradient field 
	
	for (i = 0; i < N-1; i++)
	{
		printf("At time = %.3f the value of temperature is %.2f and the value of temperature gradient is %.2f\n", time[i], T[i], gradT[i]);
	}
	
}
	
