#include <stdio.h>

void simpleForLoop(){
    int i;
    for(i = 0; i < 3; i++){
        printf("C is fun!\n");
    }
}

void multipleForLoop(){
    int i = 0;
    for(i = 0; i < 3; i++){
        printf("C is fun!\n");
    }
    printf("\n");
    
    i = 0;
    for(i = 0; i < 5; i++){
        printf("We can do everything with it!\n");
    }
}

int main(void){
	simpleForLoop();
	multipleForLoop();
    return 0;
}