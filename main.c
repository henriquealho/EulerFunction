#include "functions.h"
#include <stdio.h>

void main() {	
	int n;
	printf("Input number: ");
	scanf("%d",&n);
	printf("\n fi(%d) = %d\n",n,fi(n));
	printf("(List saved to file 'list.txt') \n");
}