#include <stdio.h>

void packageMatches(){
    int matches;
    int matchesPerBox;
    
    scanf("%d %d", &matches, &matchesPerBox);
    
    printf("%d\n%d", matches / matchesPerBox, matches % matchesPerBox);
}

void payment(){
    // pay 166 dollars using 20-dollar bills, rest with 1-dollar bills
    int twenties = 166/20;
    int rest = 166%20;
    printf("I will pay %d dollars with 20-dollar bills.\n", twenties * 20);
    printf("I will then pay %d dollars with 1-dollar bills.\n", rest);
}

int main(void) {
	payment();
	packageMatches();
    return 0;
}