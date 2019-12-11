#include <stdio.h>

void alphabetOrder(){
    char word1[50];
    char word2[50];
    int i = 0;
    
    printf("Please enter a word: ");
    scanf("%s", word1);
    printf("And another: ");
    scanf("%s", word2);
	
    // Find first letter in which words differ
    while (word1[i] != '\0' && word2[i] != '\0' && word1[i] == word2[i]) {
        i++;
	}

    if (word1[i] < word2[i]){
		printf("%s comes before %s in the alphabet.\n", word1, word2);
	} else if (word1[i] > word2[i]){
		printf("%s comes after %s in the alphabet.\n", word1, word2);
	} else{
		printf("You entered the same word, %s, twice.\n", word1);
	}       
}

void linearSearch(){
    int list[] = {6, -2, 5, 12, 7, 3, 8, 18, -10, 1};
    int n = 10;
    int item, i, found;
    
    printf("Which number are you looking for? ");
    scanf("%d", &item);
    found = 0;
    i = 0;
    while (!found && i < n) {
        if (item == list[i]) { 
            found = 1;
        } else {
            i++;
        }
    }
    
    if (!found) {
        printf("%d is not a member of this list. \n", item);
    } else {
        printf("I found %d at index %d in the list. \n", item, i);
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

void searchT(){
	char word[51];
	scanf("%s", word);
	
	int len = strLen(word);
	int i = 0;
	
	for(i = 0; i < len; i++){
		if(word[i] == 't' || word[i] == 'T'){
			if(i <= len / 2){
				printf("%d", 1);
			} else{
				printf("%d", 2);
			}
			return;
		}
	}
	
	printf("%d", -1);
	
}

int main(void){
	alphabetOrder();
	linearSearch();
	searchT();
    return 0;
}