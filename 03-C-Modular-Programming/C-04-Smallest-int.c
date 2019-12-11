#include <stdio.h>

int min(int a, int b);
void runMin();

int main(void){
	runMin();
    return 0;
}

int min(int a, int b){
	if(a <= b){
		return a; 
	} else{
		return b;
	}
}

void runMin(){
	int nInts = 0;
	int i = 0;
	int num = 0;
	int curMin = 0;
	
	scanf("%d", &nInts);
	scanf("%d", &num);
	curMin = num;
	
	for(i = 1; i < nInts; i++){
		scanf("%d", &num);
		curMin = min(curMin, num);
	}
	
	printf("%d", curMin);
}