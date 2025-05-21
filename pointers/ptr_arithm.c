#include <stdio.h>

int main() {
	int a = 80, b = 11;
	int *ptr1 = &a, *ptr2 = &b;

	printf("Sum: %d\n", *ptr1 + *ptr2);
	printf("Difference: %d\n", *ptr1 - *ptr2);

	return 0;
}
