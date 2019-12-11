#include <stdio.h>

void readChar(){
    char letter, letter2;
    printf("Please enter two letters separated by a comma: ");
    scanf("%c,%c", &letter, &letter2);
    printf("I read the letters %c and %c.\n", letter, letter2);
}

void asciiArtLoop(){
    char ch;
    scanf("%c", &ch);
    
    int i, j, k;
    int height = 5;
    for(i = 0; i < height; i++){
        for(j = 4 - i; j > 0; j--){
            printf("+");
        }
        
        for(k = 0; k < 2 * i + 1; k++){
            printf("%c", ch);
        }
        
        for(j = 4 - i; j > 0; j--){
            printf("+");
        }
        
        printf("\n");
    }
}

void asciiArt(){
    char l;

    scanf("%c", &l);

    printf("++++%c++++\n", l);
    printf("+++%c%c%c+++\n", l, l, l);
    printf("++%c%c%c%c%c++\n", l, l, l, l, l);
    printf("+%c%c%c%c%c%c%c+\n", l, l, l, l, l, l, l);
    printf("%c%c%c%c%c%c%c%c%c\n", l, l, l, l, l, l, l, l, l);
}
int main(void) {
	readChar());
	asciiArt();
	asciiArtLoop();
    return 0;
}