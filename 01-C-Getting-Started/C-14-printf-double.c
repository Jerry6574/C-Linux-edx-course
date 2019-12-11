#include <stdio.h>

int main(void) {
    double height;
    height = 1.99;
	// %.1lf, decimal place, round to nearest even number, 2.0
    printf("I am %.1lf meters tall.",height);
    return 0;
}