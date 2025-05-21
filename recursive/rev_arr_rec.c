#include <stdio.h>

void print_reverse(int arr[], int size) {
	if (size <= 0){
	       	return;
	}
	printf("%d ", arr[size-1]);
	print_reverse(arr, size-1);
}

int main() {
	int nums[] = {1, 2, 3, 4, 5};
	int len = sizeof(nums)/sizeof(nums[0]);
	print_reverse(nums, len);
	printf("\n");
	
	return 0;
}
