int upperTriangleSum(int matrix[][N], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			sum += matrix[i][j];
		}
	}
	return sum;
}
