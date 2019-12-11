#include <stdio.h>

int factorial(int);
void iterativeFactorial();
void recursiveFactorial();


int main(void){
	iterativeFactorial();
    return 0;
}

void iterativeFactorial(){
	// 5! = 1*2*3*4*5
	// n! = 1*2*3*...*(n-1)*n
	
    int n, facto, i;
    printf("Please enter a positive integer: ");
    scanf("%d",&n);
    facto = 1;
    for(i=1 ; i<=n ; i++){
        facto = i*facto;
    }
    if(n<0){
        printf("%d is negative! Aborting..\n", n);
    }else{
        printf("%d! = %d.\n", n , facto);
    }
}

int factorial(int n){
	if(n == 0){
		return 1;
	}
	return n * factorial(n - 1);
}

void recursiveFactorial(){
    int n, facto;
    printf("Please enter a positive integer: ");
    scanf("%d",&n);
    if(n<0){
        printf("%d is negative! Aborting..\n", n);
    }else{
        facto = factorial(n);
        printf("%d! = %d.\n", n , facto);
    }
}



