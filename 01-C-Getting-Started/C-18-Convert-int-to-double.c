#include <stdio.h>

void intToDouble(){
    int iOne;
    int iTwo;
    double dOne;
    printf("Please enter two integers: ");
    scanf("%d %d",&iOne, &iTwo);
    dOne = (double) iOne;
    printf("dOne/iTwo equals %lf\n",dOne/iTwo);
}

void avgGrade(){
    int n, i, grade;
    int sum = 0;
    double average;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%d", &grade);
        sum += grade;
    }
    average = (double) sum / n;
    printf("%.2lf", average);
}

int main(void) {
	intToDouble();
	avgGrade();
    return 0;
}