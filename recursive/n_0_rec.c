#include <stdio.h>

void print_nums(int n) {
	if (n < 0) {
		return;
	}
	print_nums(n - 1);
	printf("%d ", n);
}

int main() {
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	print_nums(num);
	printf("\n");
	return 0;
}
