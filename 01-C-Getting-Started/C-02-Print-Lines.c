#include <stdio.h>

void printLines(){
    printf("Hello world!\n");
    printf("Have fun with this course!");
}

void printASCII(){
    printf("*****\n**|**\n*|.|*\n|...|\n.....\n");
}

int main(void){
	printLines();
	printASCII();
    return 0;
}