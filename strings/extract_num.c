#include <stdio.h>
#include <ctype.h>

void extract_numbers(char *str) {
	printf("Numbers: ");
	for (int i = 0; str[i] != '\0'; i++) {
		if (isdigit(str[i])) {
			printf("%c ", str[i]);
		}
	}
	printf("\n");
}

int main() {
	char str[100];
	printf("Enter string: ");
	fgets(str, sizeof(str), stdin);
	extract_numbers(str);
	return 0;
}
