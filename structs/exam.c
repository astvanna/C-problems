#include <stdio.h>

struct Student {
	char name[50];
	int score;
};

void printPassingStudents(struct Student students[], int count) {
	for (int i = 0; i < count; i++) {
		if (students[i].score >= 85) {
			printf("%s\n", students[i].name);
		}
	}
}
