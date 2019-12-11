#include <stdio.h>

void stringDemo(){
    char word[4]; //arrray of characters (string), extra char at the end reserved for \0
    printf("Please enter a word with 3 letters: ");
    scanf("%s", word); // array variable is a pointer, doesn't require "&" with scanf
	
    printf("The word read is: %s.\n", word);
    printf("The characters are: <%c> <%c> <%c> <%c>\n", word[0], word[1], word[2], word[3]);
	
    word[1] = 'a';
    printf("The new word is %s\n", word);
}

void repeatWord(){
	char word[101];
	int repetitions, i;
	
	scanf("%d %s", &repetitions, word);
	for(i = 0; i < repetitions; i++){
		printf("%s\n", word);
	}
}

int main(void){
	stringDemo();
	repeatWord();
    return 0;
}