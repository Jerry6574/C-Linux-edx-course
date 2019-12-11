#include <stdio.h>
int main() {
	// 0.3 cannot be asbolutely precisely represented
    double num = 0.3;
    
    printf("the number is %.40f\n", num);
    // the number is 0.2999999999999999888977697537484345957637      
    return(0);
}