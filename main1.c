/*
 * This approximates the value of pi 
 */
#include <stdio.h>
#include <math.h>
#include <time.h>

#include "pi_funs.h"

int main(void)
{
	double abs_error;
	int n = 100000;
	double pi;
	printf("Leibniz series \n");
	do{
		pi = pi_leibniz(n);
		abs_error = fabs(pi - M_PI);
		printf("%8d   %20.15f   %20.15f\n", n, pi, abs_error);
		n += 100000;
	}while(abs_error > .000001);
	printf("BBP\n");
	n = 1;
	do{
		pi = pi_bbp(n);
		abs_error = fabs(pi - M_PI);
		printf("%8d   %20.15f   %20.15f\n", n, pi, abs_error);
		n += 1;
	}while(abs_error > .000001);

   
	printf("\n"); 
	clock_t start, stop;
	int n_one = 1000000;
	int n_two = 4;
	int leib_runs = 100;
	
	start = clock();
	for(int i = 0; i < leib_runs; i++){
		pi = pi_leibniz(n_one);
	}
	stop = clock();
	double t1 = 1000*((double)(stop-start))/(CLOCKS_PER_SEC*leib_runs);
	printf("t1 %.6f \n", t1);
	
	int bbp_runs = 2000000;
	start  = clock();
	for(int i = 0; i < bbp_runs; i++){
		pi = pi_bbp(n_two);
	}
	stop = clock();
	double t2 = 1000*((double)(stop-start))/(1.0*CLOCKS_PER_SEC*bbp_runs);
	printf("t2 %.6f \n", t2);
	printf("%21.0f \n", t1/t2); 
	return 0;
}

