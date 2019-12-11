#include <stdio.h>

void reverseArray(int*);


int main() {
	int num = 0;
	int nums[6];
	int i = 0;
	
	for(i = 0; i < 6; i++){
		scanf("%d", &num);
		nums[i] = num;
	}
	
	reverseArray(nums);
	
	for(i = 0; i < 6; i++){
		printf("%d ", nums[i]);
	}
	
    return 0;
}

void reverseArray(int* arr){
	int i = 0;
	// hard code array size, C function cannot get the size of an array parameter implicitly
	for(i = 0; i < 3; i++){
		int temp = arr[i];
		arr[i] = arr[6 - 1 - i];
		arr[6 - 1 - i] = temp;
	}
}
