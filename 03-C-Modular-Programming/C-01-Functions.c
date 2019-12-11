#include <stdio.h>

int sum(int, int); // function prototype

// function definition
int sum(int x, int y){ // x, y: parameters
    int compute;
    printf("Starting the computation!\n");
    compute = x+y;
    printf("Finished the computation successfully!\n");
    return compute;
}

void runSum(){
    int a, b;
    int result;
	
    printf("Please enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("You entered %d and %d.\n", a, b);
	
    result = sum(a, b); // a, b: arguments
    printf("Result of the sum = %d.\n", result);
}

int main(void){
	runSum();
    return 0;
}