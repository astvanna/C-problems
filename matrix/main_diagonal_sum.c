int diagonalSum(int matrix[][N], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += matrix[i][i];
	}
	return sum;
}
