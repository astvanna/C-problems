#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <dirent.h>

int main() {
	pid_t pid = fork();

	if (pid == 0) {
		system("ls -l");
		exit(0);
	} 
	else if (pid > 0) {
		wait(NULL);
		printf("Child process finished.\n");
	} 
	else {
		perror("fork failed");
		return 1;
	}

	return 0;
}
