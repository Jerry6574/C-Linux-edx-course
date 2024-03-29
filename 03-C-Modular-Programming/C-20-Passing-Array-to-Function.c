#include <stdio.h>
void reset(int *);

// alternative notation:
// void reset(int []);

int main() {
    //! showMemory(start=65520)
    int arr[3] = {15, 16, 17};
    reset(arr);
    return 0;
}

// alternative notation:
// void reset(int ptr[]){
void reset(int * ptr){
    * ptr = 0;
    * (ptr + 1) = 0;
    * (ptr + 2) = 0;
	
	// alternative notation:
    // ptr[0] = 0;
    // ptr[1] = 0;
    // ptr[2] = 0;
}