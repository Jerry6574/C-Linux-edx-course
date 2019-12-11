#include <stdio.h>

void nullTerminatorDemo(){
    char word1[5];
    char word2[8];
    scanf("%s %s", word1, word2);
    word1[3] = '\0';
    word2[2] = '\0';
    printf("%s %s\n", word1, word2);
	
	// input:
	// good morning  
	
	// output: 
	// goo mo  
}

void swapFirstLastName(){
	int nNames, i;
	char firstName[101];
	char lastName[101];
	
	scanf("%d", &nNames);
	
	for(i = 0; i < nNames; i++){
		scanf("%s %s", firstName, lastName);
		printf("%s %s\n", lastName, firstName);
	}
}

int main(void){
	nullTerminatorDemo();
	swapFirstLastName();
    return 0;
}