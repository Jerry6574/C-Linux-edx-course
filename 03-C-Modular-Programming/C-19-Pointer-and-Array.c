#include <stdio.h>
int main() {
    //! showMemory(start=65520)
    int arr[3] = {15, 16, 17};
    printf("%p\n",arr);
    int * ptr = arr;
    * ptr = 2; // * arr   0R  arr[0]
	
	// do pointer arithmetic, then dereference pointer
    * (ptr + 1) = 3; // * (arr + 1)   OR  arr[1]
    * (ptr + 2) = 5;// * (arr + 2)   OR arr[2]
	
	// invalid expression:
    // * ptr + 1 = 3;
    return 0;
}