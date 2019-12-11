#include <stdio.h>

void doubleArrayDemo(){
    double array[3];
    double readValue = 0.0;
    int cellNumber = 0;
    int i = 0;
	
    for(i=0;i<3;i++){
        printf("Enter a decimal value:");
        scanf("%lf",&readValue);
        array[cellNumber] = readValue;
        printf("Cell number %d contains %.2lf\n", cellNumber, array[cellNumber]);
        cellNumber = cellNumber + 1;
    }
}

void balanceTrain(){
	int nBoxCars, i;
	double average, weight;
	double sum = 0.0;
	double weights[50];
	scanf("%d", &nBoxCars);
	
	for(i = 0; i < nBoxCars; i++){
		scanf("%lf", &weight);
		sum += weight;
		weights[i] = weight;
	}
	
	average = sum / nBoxCars;
	
	for(i = 0; i < nBoxCars; i++){
		printf("%.1lf\n", average - weights[i]);
	}
}

int main(void){
	doubleArrayDemo();
	balanceTrain();
    return 0;
}