#include <stdio.h>

void behind(int*, int);


int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

void behind(int* scores, int nPlayers){
	int highest = *scores;
	int i;
	
	for(i = 1; i < nPlayers; i++){
		if(scores[i] > highest){
			highest = scores[i];
		}
	}
	
	for(i = 0; i < nPlayers; i++){
		scores[i] = highest - scores[i];
	}
}