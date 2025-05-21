#include <stdio.h>

int main() {
	char c;
	
	printf("Enter a letter: ");
	scanf("%c", &c);

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
		c ^= 32;
		printf("Now its %c\n", c);
	}else {
		printf("Not a letter.\n");
	}
	return 0;
}
