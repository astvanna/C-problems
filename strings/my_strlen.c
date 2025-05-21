#include <stdio.h>

int my_strlen(char *str) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	return len;
}

int main() {
	char str[100];
	printf("Enter your string: ");
	fgets(str, sizeof(str), stdin);
	printf("Length: %d\n", my_strlen(str));
	return 0;
}
