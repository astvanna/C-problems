int* sumPositiveEvenRows(int matrix[][M], int rows, int cols) {
	int *sumArray = (int*)malloc(rows * sizeof(int));
	
	for (int i = 0; i < rows; i++) {
		sumArray[i] = 0;
		for (int j = 0; j < cols; j++) {
			if (matrix[i][j] > 0 && matrix[i][j] % 2 == 0) {
				sumArray[i] += matrix[i][j];
			}
		}
	}
	
	return sumArray;
}
