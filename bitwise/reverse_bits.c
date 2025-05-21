#include <stdio.h>

int main() {
	unsigned int num = 0; 
	unsigned int reversed = 0;
	int bits = sizeof(num) * 8;
	
	printf("Enter a number: ");
	scanf("%u", &num);
	
	for (int i = 0; i < bits; i++) {
		if (num & (1 << i)) {
			reversed = reversed | (1 << (bits - 1 - i));
		}
	}
	
	printf("Reversed: %u\n", reversed);
	return 0;
}
