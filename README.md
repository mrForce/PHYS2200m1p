PHYS2200m1p
===========

This is our first midterm project. The point of it was to compare the Leibniz series and the Bailey-Borwein-Plouffe series as methods to calculate pi. The comparison was performed on the basis of:

1. The number of terms required to get an accurate result
2. The amount of time it took to get an accurate result.

It took about 1,000,000 terms for the Leibniz series to reach an absolute error of less than 10^(-6). It took the BBP series 4 terms to reach this level of accuracy. 

Each function call to Leibniz with n = 1,000,000 took about 60 milliseconds; each call to BBP with n = 4 took about 0.0016 milliseconds. The BBP method was almost 3800 times faster than the Leibniz method.
