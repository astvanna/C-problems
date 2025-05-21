#include <stdio.h>

int main() {
	int a = 0; 
	int b = 0, 
	int c = 0;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Average: %.2f\n", (a + b + c) / 3.0);
	return 0;
}
