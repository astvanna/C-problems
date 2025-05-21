int reverseNumber(int num) {
	int reversed = 0;
	while (num > 0) {
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}
	return reversed;
}

int isPalindrome(int num) {
	return num == reverseNumber(num);
}

int palindromeSteps(int num) {
	int count = 0;
	while (!isPalindrome(num)) {
		num += reverseNumber(num);
		count++;
	}
	return count;
}
