#include <stdio.h>
int main(){
	int i=0;
	int base = 0;
	int exponent = 0;
	int power = 0;

	printf("Enter your base: ");
	scanf("%d", &base);
	printf("Enter your exponent: ");
	scanf("%d", &exponent);

	power = 1;
	for( ;i<exponent;i++){
		power=power*base;
	}
	printf("%d to the power of %d is %d \n", base, exponent, power);
	return 0;
}

