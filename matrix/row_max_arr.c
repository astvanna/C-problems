int* createRowMaxArray(int **matrix, int rows, int cols) {
	int *maxArray = (int*)malloc(rows * sizeof(int));
	
	for (int i = 0; i < rows; i++) {
		maxArray[i] = matrix[i][0];
		for (int j = 1; j < cols; j++) {
			if (matrix[i][j] > maxArray[i]) {
				maxArray[i] = matrix[i][j];
			}
		}
	}
	
	return maxArray;
}
