#include <stdio.h>

int main() {
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Result: %d\n", num | 1);
	return 0;
}

