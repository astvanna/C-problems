#include <stdio.h>

int main() {
	int num = 0;
	int count = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while (num) {
		count += num & 1;
		num >>= 1;
	}
	
	printf("%d\n", count);
	return 0;
}
