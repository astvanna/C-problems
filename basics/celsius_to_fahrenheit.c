#include <stdio.h>

int main() {
	float celsius = 0;
	printf("Enter temperature in C: ");
	scanf("%f", &celsius);
	float fahrenheit = (celsius * 9/5) + 32;
	printf("Temperature in F: %.2f\n", fahrenheit);
	return 0;
}
