#include <stdio.h>

void divisions(){
    // integer division
    printf("5/2 equals %lf\n", 5/2);
    // floating point division
    printf("5.0/2.0 equals %lf\n", 5.0/2.0);
    printf("5/2.0 equals %lf\n", 5/2.0);
    printf("5.0/2 equals %lf\n", 5.0/2);
}

void CtoF(){
    int celsius;
    double fahrenheit;
    scanf("%d", &celsius);
    fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    printf("%.1lf", fahrenheit);
}

int main(void) {
	divisions();
	CtoF();
    return 0;
}