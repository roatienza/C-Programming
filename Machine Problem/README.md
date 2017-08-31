# Machine Problem

## Numerical Integration

In computer applications, there are situations where the integral has no known closed form solution. In such cases, the integral is approximated by summation of infinitisimally small areas over the function. For this machine problem, you will create a C program that will compute the integral of a polynomial of up to degree 3. The coefficients of the polynomial, the range of integration and delta are all given on command line. delta is optional. If not given, it is assigned a small value 0.001.

A typical usage:

`./polyintegrator -c 2,-1,0,4 -r 0,1 -d 0.01`

which is the integral of `2x^3 - x^2 + 4` from `0` to `1` using delta of `0.01`.

Using `-c` to given the option for coefficients which are comma separated, `-r` for the range and `-d` for the delta.

Validate the accuracy by printing the error versus the known closed form solution of the integral of 3rd degree polynomial.

Note: 
1. Use `Makefile` to organize the compilation of your codes

Grading:
1. 40% - Functionality
2. 40% - Code structure, organization, modularity, function and variable naming
3. 10% - Q and A
4. 10% - 1-page report for the algorithm, flowchart, implementation and test results

### Due: May 12, 2017 
