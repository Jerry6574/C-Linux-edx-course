#include <stdio.h>

void guessMyNumber(){
	int nTries = 0;
	int target, guess;
	scanf("%d\n", &target);
	
	scanf("%d", &guess);
	nTries++;
	
	while(guess != target){
		if(guess < target){
			printf("it is more\n");
		} else{
			printf("it is less\n");
		}
		scanf("%d", &guess);
		nTries++;
	}
	
	printf("Number of tries needed: \n%d", nTries);
}

void chemExperiment(){
	int minTemp, maxTemp, currentTemp;
	int exitTemp = -999;
	scanf("%d %d\n", &minTemp, &maxTemp);
	scanf("%d", &currentTemp);
	
	int hitAlertTemp = 0; 
	
	while(currentTemp != exitTemp && !hitAlertTemp){
		if(currentTemp < minTemp || currentTemp > maxTemp){
			printf("Alert!\n");		
			hitAlertTemp = 1;
		} else{
			printf("Nothing to report\n");
			scanf("%d", &currentTemp);
		}
	}
}

int main(void){
	guessMyNumber();
	chemExperiment();
    return 0;
}