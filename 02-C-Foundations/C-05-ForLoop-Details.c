#include <stdio.h>

// for loop signature:
// for(initial condition; termination condition; increment)

void forLoopDemo1(){
    int i;
    // i++ is short for i = i+1
    for (i = 0; i<3; i++) {
        printf("i has the value %d.\n", i);
    }
}

// other initial condition, termination condition, increment
void forLoopDemo2(){
    int i;
    for (i = 2; i<=5; i = i+2) {
        printf("i has the value %d.\n", i);
    }
}

// reverse iteration
void forLoopDemo3(){
    int i;
    for (i = 3; i>0; i = i-1) {
        printf("i has the value %d.\n", i);
    }
}

// infinite loop if the termination condition is never met
void infiniteLoop(){
    int i;
    for (i = 3; i>0; i = i+1) {
        printf("i has the value %d.\n", i);
    }
}

int main(void) {
	forLoopDemo1();
	forLoopDemo2();
	forLoopDemo3();
	infiniteLoop();
    return 0;
}