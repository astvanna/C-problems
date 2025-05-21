#include <stdio.h>

int main() {
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("%s\n", (num & 1) ? "Odd" : "Even");
	return 0;
}
