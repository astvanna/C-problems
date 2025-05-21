#include <stdio.h>

char *my_strcat(char *dest, const char *src) {
	char *ret = dest;
	while(*dest) dest++;
	while((*dest++ = *src++));
	return ret;
}

int main() {
	char s1[20] = "Hello";
	char s2[] = " World";
	my_strcat(s1, s2);
	printf("%s\n", s1);
	return 0;
}
