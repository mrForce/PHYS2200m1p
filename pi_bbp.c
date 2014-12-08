/*
 * This is the implementation of the BBP pi calculation
 *
 */
#include <math.h>
double pi_bbp (int n)
{
	double sum = 0;
	for(int k = 0; k < n; k++){
		sum += (4./(8*k + 1) - 2./(8*k + 4) - 1./(8*k + 5) - 1./(8*k + 6))/pow(16., 1.*k);
	}
	return sum;

}
