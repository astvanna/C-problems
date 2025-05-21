#include <stdbool.h>

bool isGeometric(int n) {
	if (n < 10) return true;
	int r = (n % 10) / ((n / 10) % 10);
	while (n > 9) {
		if ((n % 10) / ((n / 10) % 10) != r)
		return false;
		n /= 10;
	}
	return true;
}
