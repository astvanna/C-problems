#include <stdio.h>
#include <ctype.h>

int find_first_digit(char *str) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (isdigit(str[i])) {
			return i;
		}
	}
	return -1;
}

int main() {
	char str[100];
	printf("Enter string: ");
	fgets(str, sizeof(str), stdin);
	printf("First digit at: %d\n", find_first_digit(str));
	return 0;
}
