#include <stdio.h>
#include <ctype.h>

char to_upper(char c) {
	if (c >= 'a' && c <= 'z') {
		return c - ('a' - 'A');
	}
	return c;
}

char to_lower(char c) {
	if (c >= 'A' && c <= 'Z') {
		return c + ('a' - 'A');
	}
	return c;
}

void to_title(char *str) {
	if (str[0] != '\0') {
		str[0] = to_upper(str[0]);
		for (int i = 1; str[i] != '\0'; i++) {
			str[i] = to_lower(str[i]);
		}
	}
}

int main() {
	char str[100];
	printf("Enter string: ");
	fgets(str, sizeof(str), stdin);
	to_title(str);
	printf("%s", str);
	return 0;
}
