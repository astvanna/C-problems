#include <stdio.h>

void printBinary(int n){
	if (n == 0){
		return;
	}
	printBinary(n / 2);
	printf("%d", n % 2);
}

int main(){
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	if (num == 0){
		printf("0");
	}else
		printBinary(num);

	printf("\n");
	return 0;
}
