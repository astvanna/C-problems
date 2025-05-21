#include <stdio.h>

int main() {
	int num = 0; 
	int n = 0;
	printf("Enter a number and bit: ");
	scanf("%d %d", &num, &n);
	printf("Result: %d\n", num | (1 << n));
	return 0;
}
