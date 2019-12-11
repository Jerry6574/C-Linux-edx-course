#include <stdio.h>
int main(void){

    short a[3] = {234,655, 843};
    short b[2] = {12, 62};
    short c[4] = {3456, 3467, 23, 276};
    short* arrays[3] = {a, b, c};
	
	// accessing a[0]
	// arrays[0][0] = 5;
    *arrays[0] = 5;
	
	// accessing a[1]
	// arrays[0][1] = 6;
	*(arrays[0] + 1) = 6;
	
	// accessing a[2]
	*(arrays[0] + 2) = 7;
	
	// accessing b[0]
	// arrays[1][0] = 3;
    *arrays[1] = 3;
	
	// accessing b[1]
	*(arrays[1] + 1) = 4;
	
	
    return 0;
}