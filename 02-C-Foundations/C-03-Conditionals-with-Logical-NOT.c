#include <stdio.h>

void notDemo(){
    int sunny = 0; // 0: cloudy, other value (1 for example): sunny
    int vacation = 0; // 0: working , other value (1 for example): vacation
    int NOTsunnyANDNOTvacation = !sunny && !vacation;
    if (NOTsunnyANDNOTvacation){
        printf("It's neither sunny nor am I on vacation!\n");
    }
}

void andNotDemo(){
    int age;
    printf("What is your age?\n");
    scanf("%d",&age);
    if(age >= 18 && !(age >= 65)){
        printf("You are in the labor force\n");
    }else{
        printf("You are not in the labor force\n");
    }
}

void nameThatTree(){
	int height, leafletCounts;
	scanf("%d\n%d", &height, &leafletCounts);
	
	if(height <= 5 && leafletCounts >= 8){
		printf("Tinuviel");
	} else if(height >= 10 && leafletCounts >= 10){
		printf("Calaelen");
	} else if(height <= 8 && leafletCounts <= 5){
		printf("Falarion");
	} else if(height >= 12 && leafletCounts <= 7){
		printf("Dorthonion");
	} else{
		printf("Uncertain");
	}
}

int main(void) {
	notDemo();
	andNotDemo();
	nameThatTree();
    return 0;
}