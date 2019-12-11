#include <stdio.h>

void simpleIf(){
    // if it is true then do this
    // if it is not true, then do not do this
    //FALSE 0 0.0
    //TRUE all vallues that are non-zero (positive or negative)
    int weatherIsGood = 99; //the weather is good!
    if(weatherIsGood){
        printf("The weather is good!\n");
        printf("I can go outside! Yeah!\n");
    }
}

void ifElse(){
    int weatherIsGood = 99; //the weather is good!
    if(weatherIsGood){
        printf("The weather is good!\n");
        printf("I can go outside! Yeah!\n");
    } else{
        printf("The weather is bad!\n");
        printf("Too bad, I have to stay home!\n");
    }
}

void dynamicConditionIf(){
    // + - * / % : arithmetic operators
    // < > <= >= != == : comparison operators
    int a = 5;
    int b = 2;
    int result;
    printf("Check: Is a == b?\n");
    result = (a==b);
    printf("Result is %d.\n", result);
    if (result) {
        printf("TRUE!\n");
    } else {
        printf("FALSE!\n");
    }
}

void carPooling(){
    int passengers;
    double cost;
    
    scanf("%d %lf", &passengers, &cost);
    
    if(passengers){
        cost++;
        printf("%.2lf", cost / (passengers + 1));
    } else{
        printf("%.2lf", cost);
    }
}

void youthHostel(){
	int lateByHours;
	int baseRate = 10;
	int totalCost; 
	int cap = 53;
	
	scanf("%d", &lateByHours);
	
	if(lateByHours){
	    totalCost = baseRate + lateByHours * 5;
	    if(totalCost > cap){
	        totalCost = cap;
	    }
	    printf("%d", totalCost);
	} else{
	    printf("%d", baseRate);
	}
}

void doublePrecisionDemo(){
    // + - * / % : arithmetic operations
    // <  >  <=  >=  !=  ==  :  comparison operations
    double a = 5.0000000000000001; // doubles have finite precisions in C,
    double b = 5.0000000000000000; // beaware if precisions exceed the limit.
    int result;
    printf("Check: Is a == b ?\n");
    result = a == b;
    printf("result is %d\n", result);
    if(result){
        printf("TRUE\n");
    }else{
        printf("FALSE\n");
    }
	
	// Output:
	// Check: Is a == b ?                                                              
	// result is 1                                                                     
	// TRUE    
}

void bridgeTax(){
	int die1, die2, sum;
	int specialTaxThreshold = 10;
	int specialTax = 36;
	
	scanf("%d\n%d", &die1, &die2);
	sum = die1 + die2;
	int regularTax = sum * 2;
	
	if(sum >= specialTaxThreshold){
	    printf("Special tax\n%d", specialTax);
	} else{
	    printf("Regular tax\n%d", regularTax);
	}
}

void tugOfWar(){
    int teamSize, i, weight;
    int team1Weight = 0;
    int team2Weight = 0;
    
    scanf("%d", &teamSize);
    
    for(i = 0; i < teamSize * 2; i++){
        scanf("%d", &weight);
        if(i % 2 == 0){
            team1Weight += weight;
        } else{
            team2Weight += weight;
        }
    }
    
    if(team1Weight > team2Weight){
        printf("Team 1 has an advantage\n");
    } else{
        printf("Team 2 has an advantage\n");
    }
    
    printf("Total weight for team 1: %d\n", team1Weight);
    printf("Total weight for team 2: %d", team2Weight);
}

int main(void) {
	simpleIf();
	ifElse();
	dynamicConditionIf();
	carPooling();
	youthHostel();
	doublePrecisionDemo();
	bridgeTax();
	tugOfWar();
    return 0;
}