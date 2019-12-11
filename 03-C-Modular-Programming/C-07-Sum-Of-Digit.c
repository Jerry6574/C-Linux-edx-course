#include <stdio.h>

int sumOfDigit(int digit);

int main(void) {
	int input = 0;
	scanf("%d", &input);
	
	int sum = sumOfDigit(input);
	
	printf("%d", sum);
	return 0;
}

int sumOfDigit(int digit){
	if(digit / 10 == 0){
		return digit;
	}
	int remaider = digit % 10;
	return remaider + sumOfDigit(digit / 10);
}


