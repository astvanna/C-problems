#include <stdio.h>

int main() {
	int age = 0;
	printf("Enter age (years): ");
	scanf("%d", &age);
	printf("Age in days: %d\n", age * 365);
	return 0;
}
