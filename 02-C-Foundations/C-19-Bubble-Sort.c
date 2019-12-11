#include <stdio.h>

void bubbleSort(){
    int list[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5}; /* unsorted list */
    int n = 10;
    int i, j;
    int swap;
    
    printf("Unsorted list: \n");
    for (i=0; i<n; i++) {
        printf("%d ", list[i]);
    }
    
    for (j=0; j<n-1; j++) {
		// every iteration of the inner loop, the max value "bubbles" to the end of array
        for (i=0; i<n-1; i++) {
            if (list[i] > list[i+1]) {
                swap = list[i];
                list[i] = list[i+1];
                list[i+1] = swap;
            }
        }
    }
    
    printf("\nSorted list: \n");
    for (i=0; i<n; i++) {
        printf("%d ", list[i]);
    }
}


int main(void){
	bubbleSort();
    return 0;
}