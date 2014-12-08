#include "pi_funs.h"
#include <stdio.h>
#include <math.h>

double pi_leibniz(int n){
	double sign = 1;
	double total = 0;
	/*
		Here, we'll use the 
	*/



	for(int x = 1; x <= 2*n + 1; x += 2){
		total += sign/x;
		sign = sign*(-1);
	}


	return 4*total;
}
