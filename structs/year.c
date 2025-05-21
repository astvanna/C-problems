#include <stdio.h>

struct Date {
	int day;
	int month;
	int year;
};

int isLeapYear(int year) {
	if (year % 4 != 0) {
		return 0;
	} else if (year % 100 != 0) {
		return 1;
	} else if (year % 400 == 0) {
		return 1;
	} else {
		return 0;
	}
}

int daysInMonth(int month, int year) {
	int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month == 2 && isLeapYear(year)) {
		return 29;
	}
	return days[month - 1];
}

int dateToDays(struct Date d) {
	int totalDays = 0;
	
	for (int y = 1; y < d.year; y++) {
		if (isLeapYear(y)) {
			totalDays += 366;
		} else {
			totalDays += 365;
		}
	}
	
	for (int m = 1; m < d.month; m++) {
		totalDays += daysInMonth(m, d.year);
	}

	totalDays += d.day;
	
	return totalDays;
}

int dateDifference(struct Date d1, struct Date d2) {
	int days1 = dateToDays(d1);
	int days2 = dateToDays(d2);
	if (days1 > days2) {
		return days1 - days2;
	} else {
		return days2 - days1;
	}
}
