#include <stdio.h>

int main() {
	float weight = 0; 
	float height = 0;
	printf("Enter weight (kg) and height (m): ");
	scanf("%f %f", &weight, &height);
	printf("BMI: %.1f\n", weight / (height * height));
	return 0;
}
