#include <stdio.h>

void wordFreq(){
    int i = 0;
    int t = 0;
    int l = 0;
    int j = 0;
    int nbWords = 0;
    char word[11];
    int length[10];//length[5] number of 5-letter-long words in the text
    for(i=0;i<10;i++){
        length[i]=0;
    }
    scanf("%d", &nbWords);
    for(t=0;t<nbWords;t++){
        scanf("%s", word);
        l = 0;
        while(word[l] != '\0'){
            l++;
        }
		// increment word count
        length[l] = length[l] + 1;
		
        printf("%s %d ", word,l);
    }
    for(j=0;j<10;j++){
        printf("There are %d words with %d letters.\n", length[j], j);
    }
}

int strLen(char *word){
    int i = 0;

    while (*word != '\0'){
		word++;
		i++;	
	}

    return i;
}

void longestWord(){
	int nWords = 0;
	int i = 0;
	char word[101];
	int maxLen = 0;
	int currentLen = 0;
	
	scanf("%d", &nWords);
	
	for(i = 0; i < nWords; i++){
		scanf("%s", word);
		currentLen = strLen(word);
		if(currentLen > maxLen){
			maxLen = currentLen;
		}
	}
	
	printf("%d", maxLen);
}

int main(void){
	wordFreq();
	longestWord();
    return 0;
}