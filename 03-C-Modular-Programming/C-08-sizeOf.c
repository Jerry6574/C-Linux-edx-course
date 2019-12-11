#include <stdio.h>

void sizeOfDemo();
void trackingCode();


int main(void) {
	sizeOfDemo();
	trackingCode();
	return 0;
}

void sizeOfDemo(){
    char c;
    int i;
    double d;
    char listChar[3];
    int listInt[3];
    double listDouble[3];

    // get size from datatype name
    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(double));

    // get size from specific variables
    printf("%zu\n", sizeof(c));
    printf("%zu\n", sizeof(i));
    printf("%zu\n", sizeof(d));

    // get size of arrays
    printf("%zu\n", sizeof(listChar));
    printf("%zu\n", sizeof(listInt));
    printf("%zu\n", sizeof(listDouble));
}

void trackingCode(){
	int n, i, value;
	char type;
	int totalSize = 0;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d %c", &value, &type);
		if(type == 'i'){
			totalSize = totalSize + value * 4;
		} else if(type == 'c'){
			totalSize = totalSize + value;
		} else if(type == 'd'){
			totalSize = totalSize + value * 8;
		} else{
			printf("Invalid tracking code type ");
			return;
		}
	}
	
	printf("%d bytes", totalSize);
}



