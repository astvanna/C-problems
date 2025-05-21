#include <stdio.h>

int main() {
	int a = 314;
	float b = 3.14;
	char c = 'Z';

	int *ptr1 = &a;
	float *ptr2 = &b;
	char *ptr3 = &c;

	printf("Address in ptr1: %p\n", ptr1);
	printf("Address in ptr2: %p\n", ptr2);
	printf("Address in ptr3: %p\n", ptr3);

	return 0;
}
