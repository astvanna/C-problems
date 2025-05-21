#include <stdio.h>

struct Movie {
	char title[100];
	char director[50];
	int releaseYear;
	float rating;
};

void inputMovieData(struct Movie *m) {
	printf("Enter movie title: ");
	scanf(" %[^\n]", m->title);
	printf("Enter director name: ");
	scanf(" %[^\n]", m->director);
	printf("Enter release year: ");
	scanf("%d", &m->releaseYear);
	printf("Enter rating: ");
	scanf("%f", &m->rating);
}

void displayMovieData(struct Movie m) {
	printf("\nMovie Details:\n");
	printf("Title: %s\n", m.title);
	printf("Director: %s\n", m.director);
	printf("Release Year: %d\n", m.releaseYear);
	printf("Rating: %.1f/10\n", m.rating);
}
