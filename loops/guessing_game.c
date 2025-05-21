#include <stdio.h>

int main() {
	int secret = 48;
	int guess = 0;
	char input[10];

	printf("Guess the number (0-100) or 'q' to quit:\n");
	while (1) {
		printf("Your guess: ");
		scanf("%s", input);
		if (input[0] == 'q' || input[0] == 'Q') break;
		guess = 0;
		for (int i = 0; input[i] >= '0' && input[i] <= '9'; i++) {
			guess = guess * 10 + (input[i] - '0');
		}
		if (guess == secret) {
			printf("Congratulations! You won!\n");
			break;
        	} else if (guess < secret) {
			printf("Too small\n");
		} else {
			printf("Too big\n");
		}
	}
	return 0;
}
