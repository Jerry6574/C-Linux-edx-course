#include <stdio.h>

void printOddNumbers(){
    int target;
    int i;
    printf("Please enter a target number: ");
    scanf("%d", &target);
    if (target >= 0) {
        for (i=0; i<target; i++) {
            if (i%2) {
                printf("%d ", i);
            }
        }
    } else {
        printf("Nothing to do!\n");
    }
    return 0;
}

void bigCities(){
	int nCities, population, i;
	int nBigCities = 0;
	
	scanf("%d", &nCities);
	
	for(i = 0; i < nCities; i++){
		scanf("%d", &population);
		if(population > 10000){
			nBigCities++;
		}
	}
	
	printf("%d", nBigCities);
}


int main(void){
	printOddNumbers();
	bigCities();
    return 0;
}