#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

double log2(int x) {
	if (x <= 0) return 0;
	double result = 0;
	double current = x;
	while (current > 1) {
		current /= 2;
		result++;
	}
	return result;
}

int main() {
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	pid_t p1 = fork();
	if (!p1) {
		double res = log2(num);
		printf("Log2(%d) = %f\n", num, res);
		exit(0);
	}

	pid_t p2 = fork();
	if (!p2) {
		int fact = 1;
		for (int i = 1; i <= num; i++) fact *= i;
		printf("Factorial(%d) = %d\n", num, fact);
		exit(0);
	}

	pid_t p3 = fork();
	if (!p3) {
		int cube = num * num * num;
		printf("Cube(%d) = %d\n", num, cube);
		exit(0);
	}

	int status;
	pid_t first_child = wait(&status);
	printf("First child PID: %d\n", first_child);

	kill(p1, SIGTERM);
	kill(p2, SIGTERM);
	kill(p3, SIGTERM);

	return 0;
}
