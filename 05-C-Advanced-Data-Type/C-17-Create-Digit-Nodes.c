#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit * next;
};

struct digit * createDigit(int dig);

int main(void) {
    struct digit * numberptr;
    int digitToStore = 5;
	
    numberptr = createDigit(digitToStore);
    printf("We are storing the digit %d and the pointer %p at memory location %p.\n", numberptr->num, numberptr->next, numberptr);
    
	free(numberptr);
    return 0;
}

struct digit * createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
	
    ptr->num = dig;
    ptr->next = NULL;
	
    return ptr;
}