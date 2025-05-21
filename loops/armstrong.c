#include <stdio.h>

int main() {
	int n = 0;
	int Num = 0;
	int last_dig = 0; 
	int dig = 0;
	int res = 0;

	printf("Enter your number; ");
	scanf("%d", &n);

	Num = n;

	while (Num != 0) {
		Num /= 10;
		dig++;
	}

	Num = n;

	while (Num != 0) {
		last_dig = Num % 10;
		int pow = 1;
		for (int i = 0; i < dig; i++) {
			pow *= last_dig;
		}
		res += pow;
		Num /= 10;
	}

	if (res == n) {
		printf("%d is an Armstrong number.\n", n);
	} else {
		printf("%d is not an Armstrong number.\n", n);
	}

	return 0;
}
