#include <stdio.h>

int main() {
	int num = 0, n = 0;
	printf("Enter a number and bit pos: ");
	scanf("%d %d", &num, &n);
	num = num ^ (1 << n);
	printf("Result: %d\n", num);
	return 0;
}
