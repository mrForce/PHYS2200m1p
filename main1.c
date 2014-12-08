/*
 * Comments goes here
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

	do{
		pi = pi_leibniz(n);
		abs_error = fabs(pi - M_PI);
		printf("%8d   %20.15f   %20.15f\n", n, pi, abs_error);
		n += 100000;
	}while(abs_error > .000001);

   
	printf("\n"); 
	//printf("%21.0f \n", t2/t1); 
	return 0;
}

