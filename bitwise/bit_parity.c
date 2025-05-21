#include <stdio.h>

int main() {
	int num = 0;
	int parity = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while (num) {
		parity ^= num & 1;
		num >>= 1;
	}
	
	printf("%s parity\n", parity ? "Odd" : "Even");
	return 0;
}
