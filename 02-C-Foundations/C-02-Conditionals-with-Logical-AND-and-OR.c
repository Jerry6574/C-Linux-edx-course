#include <stdio.h>

void andDemo(){
    int sunny = 1;
    int vacation = 1;
    int sunAndVacation = sunny && vacation;
	
	// AND truth table
    // 1 && 1 : 1,  1 && 0 : 0, 0 && 1 : 0, 0 && 0 : 0
    if (sunAndVacation) {
        printf("Yeah!!\n");
    } else {
        printf("Too bad!\n");
    }
}

void orDemo(){
    int sunny = 0;
    int vacation = 0;
    int sunORvacation = sunny || vacation;
	
	// OR truth table
    //1||1:1 1||0:1 0||1:1 0||0:0
    if(sunORvacation){
        printf("Going well: it is sunny OR I am on vacation OR both!\n");
    }else{
        printf("Not going well: it is NEITHER sunny NOR am I on vacation!\n");
    }
}

void costlyHotelRooms(){
	int age, luggageWeight, cost;
	int luggageCost = 0;
	scanf("%d\n%d", &age, &luggageWeight);
	
	if(age == 60){
		cost = 0;
	} else if(age < 10){
		cost = 5;
	} else{
		if(luggageWeight > 20){
			luggageCost = 10;
		}
		cost = 30 + luggageCost;
	}
	
	printf("%d", cost);
}


int main(void) {
	andDemo();
	orDemo();
	costlyHotelRooms();
    return 0;
}