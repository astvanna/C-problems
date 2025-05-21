#include <stdbool.h>

bool isArithmetic(int n) {
	if (n < 10) return true;
	int d = (n % 10) - ((n / 10) % 10);
	while (n > 9) {
		if ((n % 10) - ((n / 10) % 10) != d) return false;
		n /= 10;
	}
		return true;
}
