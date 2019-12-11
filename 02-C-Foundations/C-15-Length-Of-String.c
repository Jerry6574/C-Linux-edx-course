#include <stdio.h>

void lengthOfString(){
    char word[30];
    int i = 0;
	
    printf("Please enter a word: ");
    scanf("%s", word);
	
    while (word[i] != '\0'){
		i++;	
	}

    printf("%s has word length %d.\n", word, i);
}

int strLen(char *word){
    int i = 0;

    while (*word != '\0'){
		word++;
		i++;	
	}

    return i;
}

void evenOddLength(){
	char name[50];
	scanf("%s", name);
	int length = strLen(name);
	
	if(length % 2 == 0){
		printf("%d", 1);
	} else{
		printf("%d", 2);
	}
}

int main(void){
	lengthOfString();
	evenOddLength();
    return 0;
}