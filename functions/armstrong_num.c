int countDigits(int num) {
	int count = 0;
	while (num > 0) {
		count++;
		num /= 10;
	}
	return count;
}

int isArmstrong(int num) {
	int og = num;
	int power = countDigits(num);
	int sum = 0;
	while (num > 0) {
		int digit = num % 10;
		int term = 1;
		for (int i = 0; i < power; i++) {
			term *= digit;
		}
		sum += term;
		num /= 10;
	}
	return sum == og;
}
