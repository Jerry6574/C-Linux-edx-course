#include <stdio.h>

void reverseText(char text[][41], int nWords);

int main(void){
	char text[68][41];
	
	int nWords = 68; 
	int i = 0;
	
	for(i = 0; i < 68; i++){
		scanf("%s", text[i]);
	}
	
	reverseText(text, nWords);
	
    return 0;
}

void reverseText(char text[][41], int nWords){
	int i; 
	
	for(i = 0; i < nWords; i++){
		printf("%s ", text[nWords - 1 - i]);
	}
}

