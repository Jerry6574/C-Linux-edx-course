#include <stdio.h>

void arrayDemo1(){
    int array[3]; // creates space to hold three integers
    array[0] = 18;
    array[1] = 137;
    array[2] = 8;
    printf("First element is %d.\n", array[0]);
    printf("Second element is %d.\n", array[1]);
    printf("Third element is %d.\n", array[2]);
}

// populate array with user input
void arrayDemo2(){
    int array[3];
    int readValue = 0;
    int cellNumber = 0;
    int i = 0;
    for(i = 0 ; i < 3 ; i++){
        printf("Enter a value:");
        scanf("%d", &readValue);
        array[cellNumber] = readValue;
        printf("Cell number %d contains %d\n", cellNumber, array[cellNumber]);
        cellNumber = cellNumber + 1;
    }
}

void recipeArray(){
	int array[10];
	int i = 0;
	int amount, id;
	
    for(i = 0 ; i < 10 ; i++){
        scanf("%d", &amount);
        array[i] = amount;
    }
	
	scanf("%d", &id);
	printf("%d", array[id]);
}

int main(void) {
	arrayDemo1();
	arrayDemo2();
	recipeArray();
    return 0;
}