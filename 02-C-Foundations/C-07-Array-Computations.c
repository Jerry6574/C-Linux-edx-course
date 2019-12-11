#include <stdio.h>

void maxAge(){
    int ages[10];
    int i;
    int ageMax = 0;
    for (i=0; i<10; i++) {
        scanf("%d", &ages[i]);
        if (ages[i] > ageMax) {
            ageMax = ages[i];
        }
    }
    printf("The maximum age is %d.\n", ageMax);
}

void ageDiff(){
    int ages[10];
    int i;
    int ageMax = 0;
    for (i=0; i<10; i++) {
        scanf("%d", &ages[i]);
        if (ages[i] > ageMax) {
            ageMax = ages[i];
        }
    }
    printf("The maximum age is %d.\n", ageMax);
    printf("Age differences with the eldest person:\n");
    for(i=0;i<10;i++){
        printf("%d:%d ", ages[i],ageMax-ages[i]);
    }
}

void minAge(){
    int ages[10];
    int i;
    int ageMin;
    for (i=0; i<10; i++) {
        scanf("%d", &ages[i]);
        if (i == 0 || ages[i] < ageMin) {
            ageMin = ages[i];
        }
    }
    printf("The minimum age is %d.\n", ageMin);
}

void mealCost(){
	int nIngredients, i;
	double price, weight;
	double cost = 0;
	double prices[10];
	double weights[10];
	
	scanf("%d", &nIngredients);
	
	for(i = 0; i < nIngredients; i++){
		scanf("%lf", &price);
		prices[i] = price;
	}
	
	for(i = 0; i < nIngredients; i++){
		scanf("%lf", &weight);
		weights[i] = weight;
	}
	
	for(i = 0; i < nIngredients; i++){
		cost = cost + prices[i] * weights[i];
	}
	
	printf("%lf", cost);
}

int main(void){
	maxAge();
	ageDiff();
	minAge();
    return 0;
}