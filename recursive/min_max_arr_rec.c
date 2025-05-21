#include <stdio.h>

int find_min(int array[], int size){
	if (size == 1) {
		return array[0];
	}
	int min = find_min(array, size - 1);
	if (array[size - 1] < min) {
		return array[size - 1];
	} else {
		return min;
	}
}

int find_max(int array[], int size){
	if (size == 1) {
		return array[0];
	}
	int max = find_max(array, size - 1);
	if (array[size - 1] > max) {
		return array[size - 1];
	} else {
		return max;
	}
}

int main() {
	int arr[] = {6, 9, 2, 13, 1};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Min: %d\n", find_min(arr, size));
	printf("Max: %d\n", find_max(arr, size));

	return 0;
}
