int power(int base, int exponent) {
    if (exponent < 0) {
        return 0;
    }
    
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int geometricSum(int arr[], int size) {
	if (size == 0) {
		return 0;
	}
	
	int first = arr[0];
	int rat = 0;
	
	if (size > 1) {
		rat = arr[1] / arr[0];
	} else {
		rat = 0;
	}
	
	if (rat == 1) {
		return first * size;
	}
	
	return first * (1 - power(rat, size)) / (1 - ratio);
}
