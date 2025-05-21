#include <stdio.h>

char *my_strstr(const char *haystack, const char *needle) {
	if(!*needle) return (char *)haystack;
	
	for(; *haystack; haystack++) {
		const char *h = haystack, *n = needle;
		while(*h && *n && *h == *n) {
			h++;
			n++;
		}
		if(!*n) return (char *)haystack;
	}
	return NULL;
}

int main() {
	char s[] = "Hello World";
	char *p = my_strstr(s, "World");
	printf("%p\n", p);
	return 0;
}
