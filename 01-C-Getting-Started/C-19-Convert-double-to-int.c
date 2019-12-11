#include <stdio.h>

void doubleToInt(){
    double dOne, dTwo;
    int iOne, iTwo;
    printf("Please enter two decimals: ");
    scanf("%lf %lf", &dOne, &dTwo);
    printf("I read dOne = %lf, dTwo = %lf.\n", dOne, dTwo);
    iOne = (int) dOne;
    iTwo = (int) dTwo;
    printf("iOne = %d, iTwo = %d.\n", iOne, iTwo);
    printf("%d / %d = %d.\n", iOne, iTwo, iOne/iTwo);
}

void populationGrowth(){
    int population;
    double growth;
    
    scanf("%d", &population);
    scanf("%lf", &growth);
    printf("%d", (int) (population * (1 + growth / 100)));
}

void buyBooks(){
    double money, price;
    
    scanf("%lf\n%lf", &money, &price);
    // number of bookx money can buy:
    printf("%d", (int) (money / price));
}

void buyCement(){
    double cement;
    int lbPerBag = 120;
    int cost = 45;
    
    scanf("%lf", &cement);
    
    int bags = 1 + (int) (cement / lbPerBag);
}

int main(void) {
	doubleToInt();
	populationGrowth();
	buyBooks();
	buyCement();
    return 0;
}