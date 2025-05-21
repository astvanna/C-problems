#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main() {
	pid_t pid = fork();

	if (pid > 0) {
		printf("Parent PID: %d\n", getpid());
		printf("Child PID: %d\n", pid);
		
		int status;
		waitpid(pid, &status, 0);
		
		if (WIFEXITED(status)) {
			printf("Child exited with status: %d\n", WEXITSTATUS(status));
		}
	} else if (pid == 0) {
		printf("Child PID: %d\n", getpid());
		printf("Parent PID: %d\n", getppid());
		exit(0);
	} else {
		perror("fork failed");
		return -1;
	}
	return 0;
}
