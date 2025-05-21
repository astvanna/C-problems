#include <stdio.h>

char *my_strchr(const char *str, int c) {
	while(*str) {
		if(*str == c) return (char *)str;
		str++;
	}
	return NULL;
}

int main() {
	char s[] = "Hello";
	char *p = my_strchr(s, 'e');
	printf("Found at: %p\n", p);
	return 0;
}
