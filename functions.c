#include "functions.h"
#include <stdio.h>
#include <math.h>

// Check if a number is Prime using the sqrt
int ifPrime(int n) { 
	
	int i;
	if(n==1 || n==0) return 0; // 1 and 0 are not prime numbers !
	for(i=2; i <=sqrt((float)n); i++){
		
		if((n%i) == 0) return 0;
	}
	return 1;
}

// Gets the minimum value between two numbers
int min(int a, int b) {
	if(a<b) return a;
	else return b;
}

// Maximum Common Divisor
int mdc(int n, int i) {
	int d;
	
	// Check if var's are zero, to avoid divide by zero error's
	if(n == 0) return i; 
	if(i == 0) return n;
	
	d = min(n,i); // Stores the minimum between two numbers (wich is the max that one of them can be divided!)

	// Decrements the divisor until reach the maximum number that devides both
	while (n%d != 0 || i%d != 0) {
		d--;
	}
	return d;
}

// Calculates fi(n), shows wich value is the fi(n)
	//and stores in the file the numbers that are even with n
int fi(int n) {
	FILE *f = fopen("list.txt","w");
	int i,cnt=0; 

	if(isPrime(n)) { // If n is not prime, fi(n)=n-1 . List = { 1, ... , n-1 }
		for(i=1; i < n; i++) {
			fprintf(f, "%d\n", i);
		}
		return n-1;
	}
	
	else {
/// If not prime, fi(n) = cnt,
///// where cnt is the number of primes with n
///// List = { x < n && x > 0 : mdc(n,x)=1 }
		for(i=1; i < n; i++) { 
			if(mdc(n,i)==1) {
				fprintf(f, "%d\n",i);
				cnt++;
			}
		}
		return cnt;
	}
	fclose(f);
}