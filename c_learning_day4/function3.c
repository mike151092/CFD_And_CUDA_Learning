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
		


void update_temperature(double T[], double Tnew[], double lapT[], double dx, int N, double dt, double alpha)
{
    int i;
    for (i = 1; i < N-1; i++)
    {
    	lapT[i] = (T[i+1] - 2*T[i] + T[i-1]) / (dx*dx);
        Tnew[i] = T[i] + alpha * dt * lapT[i];
    }

    /* Boundary conditions (simple copy) */
    Tnew[0]     = T[0];
    Tnew[N-1]   = T[N-1];
}

int main()
{
    int i, n;
    int N = 5;
    int Nt = 10;          // number of time steps
    double dt = 0.01;
    double dx = 0.1;
    double alpha = 0.01;

    double time[5];
    double T[5];
    double Tnew[5];
    double lapT[5];

    compute_time(N, time, dt);
    compute_temperature(N, T);

    for (n = 0; n < Nt; n++)
    {
        update_temperature(T, Tnew, lapT, dx, N, dt, alpha);

        /* Copy Tnew -> T */
        for (i = 0; i < N; i++)
            T[i] = Tnew[i];

        printf("Time = %.3f\n", n * dt);
        for (i = 0; i < N; i++)
            printf("T[%d] = %.2f\n", i, T[i]);
        printf("\n");
    }

    return 0;
}

