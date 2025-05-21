#include <stdio.h>

size_t my_strlen(const char *str) {
	size_t len = 0;
	while(*str++) len++;
	return len;
}

int main() {
	char s[] = "Hello";
	printf("Length: %zu\n", my_strlen(s));
	return 0;
}
