#include <stdio.h>

void swap(int*, int*);
void addThree(int*);

int main() {
    int a = 9;
    int b = 1;
    swap(&a, &b);
    printf("%d %d\n", a, b);
	
	int c = 5;
    addThree(&c);
    printf("inside main, value of c: %d\n", c);
	
    return 0;
}


void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void addThree(int* c){
    *c = *c + 3;
    printf("inside addThree, value of c: %d\n", *c);
}