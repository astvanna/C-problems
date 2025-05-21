#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("Sum: %d\nDifference: %d\nProduct: %d\nDivision: %d\nRemainder: %d\n", a + b, a - b, a * b, a / b, a % b);
	return 0;
}
