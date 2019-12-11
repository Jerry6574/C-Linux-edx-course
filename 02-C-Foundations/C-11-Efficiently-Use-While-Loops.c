#include <stdio.h>

void petition(){
    int signaturesNeeded = 1000;
    int day = 0;
    int newSignatures = 3;
    int totalSignatures = 3;
    while (totalSignatures < signaturesNeeded) {
        day++;
        newSignatures = 2*newSignatures;
        printf("Day %d: %d new signatures! ", day, newSignatures);
        totalSignatures = totalSignatures + newSignatures;
        printf("Total: %d\n", totalSignatures);
    }
}

void epidemic(){
	int population;
	int days = 1;
	int infected = 1;
	
	scanf("%d", &population);
	
	while(infected < population){
		days++;
		infected = 3 * infected;
	}
	
	printf("%d", days);
}

int main(void){
	petition();
	epidemic();
    return 0;
}