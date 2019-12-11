#include <stdio.h>

void memoryUsage(char type, int count);

int main() {
	char type;
	int count;
	scanf("%c %d", &type, &count);
	memoryUsage(type, count);
    return(0);
}

void memoryUsage(char type, int count){
	int size = 0;
	int totalSize = 0;
	
	int MB = 0;
	int KB = 0;
	int B = 0;
	
	if(type == 'i'){
		size = sizeof(int);
	} else if(type == 's'){
		size = sizeof(short);
	} else if(type == 'c'){
		size = sizeof(char);
	} else if(type == 'd'){
		size = sizeof(double);
	}
	
	totalSize = count * size;
	
	MB = totalSize / 1000000;
	KB = (totalSize - MB * 1000000) / 1000;
	B = totalSize % 1000;
	
	if(MB > 0){
		printf("%d MB and ", MB);
	}
	
	if(KB > 0){
		printf("%d KB and ", KB);
	}
	
	printf("%d B", B);
}