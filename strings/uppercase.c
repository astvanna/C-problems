#include <stdio.h>
#include <ctype.h>

char to_upper(char c) {
	if (c >= 'a' && c <= 'z') {
		return c - ('a' - 'A');
	}
	return c;
}

void to_uppercase(char *str) {
	for (int i = 0; str[i] != '\0'; i++) {
		str[i] = to_upper(str[i]);
	}
}

int main() {
	char str[100];
	printf("Enter string: ");
	fgets(str, sizeof(str), stdin);
	to_uppercase(str);
	printf("Uppercase: %s", str);
	return 0;
}
