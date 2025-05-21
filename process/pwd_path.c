#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <limits.h>

int main() {
	pid_t pid1 = fork();

	if (pid1 == 0) {
		system("ls");
		exit(0);
	} 
	else if (pid1 > 0) {
		wait(NULL);

		pid_t pid2 = fork();
		if (pid2 == 0) {
			char cwd[PATH_MAX];
			if (getcwd(cwd, sizeof(cwd))) {
				printf("Absolute path: %s\n", cwd);
			}
			exit(0);
		} 
		else if (pid2 > 0) {
			wait(NULL);
			printf("Both child processes finished.\n");
		} 
		else {
			perror("fork failed");
			return 1;
		}
	} 
	else {
		perror("fork failed");
		return 1;
	}

	return 0;
}
