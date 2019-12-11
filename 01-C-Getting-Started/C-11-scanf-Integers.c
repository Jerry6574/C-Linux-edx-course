#include <stdio.h>

void readOneInt(){
    int age;//DECLARE
    printf("Whare is your age ?\n");
    scanf("%d",&age);
    printf("You are %d years old\n", age);//USE
}

void readMultipleInts(){
    int first, second, third;
    printf("Please enter three integers, separated by commas: ");
    scanf("%d,%d,%d", &first, &second, &third);
    printf("You entered: %d for first, %d for second, %d for third.\n", first, second, third);
}

void multiplicationTable(){
	int i;
	int n;
	
	scanf("%d", &n);
	
	for(i = 0; i < 11; i++){
		printf("%dx%d = %d\n", i, n, i*n); 
	}
}

int main() {
	readOneInt();
	readMultipleInts();
	multiplicationTable();
    return 0;
}