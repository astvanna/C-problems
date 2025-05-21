#include <stdio.h>

int main() {
	int n = 0;
	int x = 0;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ", x);
			x++;
			if (x > n) break;
		}
		printf("\n");
		if (x > n) break;
	}

	return 0;
}
