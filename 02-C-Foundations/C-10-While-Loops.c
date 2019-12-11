#include <stdio.h>

void whileLoopDemo1(){
    int diceValue;
    int notSix;
    scanf("%d", &diceValue);
    notSix = diceValue != 6;

    while (notSix) {
        scanf("%d", &diceValue);
        notSix = diceValue != 6;
    }
}

void whileLoopDemo2(){
    int diceValue = 0;
    int nbThrows = 0;
    scanf("%d", &diceValue);
    while(diceValue != 6){
        scanf("%d", &diceValue);
        nbThrows = nbThrows + 1;
    }
    printf("We needed %d throws to get the value 6\n", nbThrows+1);
}

void universityExpenses(){
	int expense = 0;
	int sum = 0;
	
	scanf("%d", &expense);
	while(expense != -1){
		sum += expense;
		scanf("%d", &expense);
	}
	
	printf("%d", sum);
}

int main(void){
	whileLoopDemo1();
	whileLoopDemo2();
	universityExpenses();
    return 0;
}