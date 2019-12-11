#include <stdio.h>
#include <stdlib.h>

int main(void){
	// malloc allocate memory at multiples of 4 bytes
	malloc(4);
	
	int* intptr;
	double* doubleptr;
	
	// allocate memory for mutiple ints
	// (int*) malloc(3 * sizeof(int))
	
	intptr = (int*) malloc(sizeof(int));
	*intptr = 5;
	
	doubleptr = (double*) malloc(sizeof(double));
	*doubleptr = 9.5;
	
    return 0;
}