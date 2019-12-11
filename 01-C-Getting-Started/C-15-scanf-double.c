#include <stdio.h>

void readDouble(){
    double height;
    printf("How tall are you (in meters")
    scanf("%lf", &height);
    printf("I am %.2lf meters tall.", height);
}

void readIntDouble(){
    int age;
    double height;
    printf("What is your age?");
    scanf("%d",&age);
    printf("What is your height?");
    scanf("%lf",&height);
    printf("You are %d years old and %.2lf meters tall.",age,height);
}

void kmToMile(){
    double kmToMileRatio = 0.621371;
    double km;
    
    scanf("%lf", &km);
    printf("%lf", km * kmToMileRatio);
}

int main(void) {
	readDouble();
	readIntDouble();
	kmToMile();
    return 0;
}