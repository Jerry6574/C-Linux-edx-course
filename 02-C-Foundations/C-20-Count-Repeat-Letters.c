#include <stdio.h>

int strLen(char *word){
    int i = 0;

    while (*word != '\0'){
		word++;
		i++;	
	}

    return i;
}

void bubbleSort(char *word, int len){
    int i, j;
    char swap;
 
    for (j=0; j<len-1; j++) {
		// every iteration of the inner loop, the max value "bubbles" to the end of array
        for (i=0; i<len-1; i++) {
            if (word[i] > word[i+1]) {
                swap = word[i];
                word[i] = word[i+1];
                word[i+1] = swap;
            }
        }
    }
}

void countRepeatedLetters(){
	int nRepeatedLetters = 0;
	int i = 0;
	char currentChar = '\0';
	
	char word[50];
	scanf("%s", word);
	int len = strLen(word);
	bubbleSort(word, len);
	
	for(i = 0; i < len - 1; i++){
		// letters that occur more than twice are not counted again
		if(word[i] == word[i+1] && currentChar != word[i]){
			nRepeatedLetters++;
			currentChar = word[i];
		}
	}
	
	printf("%d", nRepeatedLetters);
}


int main(void){
	countRepeatedLetters();
    return 0;
}