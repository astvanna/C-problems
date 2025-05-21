#include <stdio.h>

int main() {
	int num = 0; 
	int i = 0; 
	int j = 0;
	printf("Enter a number and two bit positions: ");
	scanf("%d %d %d", &num, &i, &j);
	
	int biti = (num >> i) & 1;
	int bitj = (num >> j) & 1;
	
	if (biti != bitj) {
		num = num ^ ((1 << i) | (1 << j));
	}
	
	printf("Result: %d\n", num);
	return 0;
}
