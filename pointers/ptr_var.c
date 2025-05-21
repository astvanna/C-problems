#include <stdio.h>

int main() {
	int num = 314;
	int *ptr = &num;
	printf("Value: %d\n", *ptr);
	return 0;
}
