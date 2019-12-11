#include <stdio.h>
int main(void) {
    //Create a variable to store an integer value
    int age;
    //Assign a value to that variable
    age = 47;
	
	// Declare and initialize variable in 1-step
	int height = 186;
    printf("I am %d years old.\n", age);
    printf("In %d years, I will be %d years old.\n", 8, age+8);
    printf("%d years ago, I was %d years old.\n", 11, age-11);
    return 0;
}