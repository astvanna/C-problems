#include <stdio.h>

int main() {
	int n = 0;
	int i = 0, 
	int j = 0;
	int num = 1;
	printf("Enter n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d", (i + j) % 2);
		}
		printf("\n");
	}
	return 0;
}
