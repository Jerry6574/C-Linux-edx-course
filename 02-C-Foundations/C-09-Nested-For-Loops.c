#include <stdio.h>

void diceGame(){
    int nbThrows = 0;
    int nbDice = 0;
    int diceValue = 0;
    int throwSum = 0;
    int throw = 0;
    int dice = 0;
    scanf("%d %d", &nbThrows, &nbDice);
    for(throw = 0; throw<nbThrows; throw++){
        for(dice = 0; dice<nbDice; dice++){
            scanf("%d", &diceValue);
            throwSum = throwSum + diceValue;
        }
        printf("throw %d sum equals %d\n", throw, throwSum);
        throwSum = 0;
    }
}

void squareOfStars(){
	int size, i, j;
	scanf("%d", &size);
	
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			printf("*");
		}
		printf("\n");
	}
}

int main(void){
	diceGame();
	squareOfStars();
    return 0;
}