#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

int isPrime(int); // checks if a given number is prime or not
int min(int, int); // returns the minimum value of two numbers
int mdc(int, int); // returns the maximum common divisor between two numbers
int fi(int n); // returns fi(n) by Euler Function and stores on a file the list of numbers that mdc(n,x)=1, where x is an int < n

#endif