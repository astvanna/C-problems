#include <stdio.h>

struct Point {
	int x;
	int y;
};

float calculateDistance(struct Point p1, struct Point p2) {
	int dx = p1.x - p2.x;
	int dy = p1.y - p2.y;
	float distsq = dx * dx + dy * dy;

	float sqrt = distsq / 2;
	float temp = 0;
	
	while (sqrt != temp) {
		temp = sqrt;
		sqrt = (distsq / temp + temp) / 2;
	}
	
	return sqrt;
}
