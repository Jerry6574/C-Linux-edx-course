#include <stdio.h>

void times8Table(){
    int i, num;
    num = 8;
    for (i = 0; i <= 10; i++){
        printf("%dx%d = %d\n", i, num, i*num);
    }
}

void pickHazelnuts(){
    int i;
    int numberOfHazelnuts = 0;
    int distanceTraveled = 0;
    for(i = 0; i < 9 ; i++) {
        printf("At %d miles I have %d hazelnuts.\n", distanceTraveled, numberOfHazelnuts);
        distanceTraveled = distanceTraveled + 1;
        numberOfHazelnuts = numberOfHazelnuts + 3;
    }
}

int main(void) {
	pickHazelnuts();
	times8Table();
    return 0;
}