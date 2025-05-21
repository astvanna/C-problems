#include <stdio.h>

char *my_strcpy(char *dest, const char *src) {
	char *ret = dest;
	while((*dest++ = *src++));
	return ret;
}

int main() {
	char dest[20];
	my_strcpy(dest, "Hello");
	printf("%s\n", dest);
	return 0;
}
