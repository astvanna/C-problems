#include <stdio.h>

int main() {
	int num = 0; 
	int n = 0;
	printf("Enter number and bit position: ");
	scanf("%d %d", &num, &n);
	num = num & ~(1 << n);
	printf("Result: %d\n", num);
	return 0;
}
