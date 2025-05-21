#include <stdio.h>

int main() {
	int arr[5] = {11, 22, 33, 44, 55};
	int *ptr = arr;

	for(int i = 0; i < 5; i++) {
		printf("%d ", *(ptr + i));
	}

	return 0;
}
