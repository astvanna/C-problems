void findMin(int matrix[][M], int rows, int cols, int *rowIndex, int *colIndex) {
	int min = matrix[0][0];
	*rowIndex = 0;
	*colIndex = 0;
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (matrix[i][j] < min) {
				min = matrix[i][j];
				*rowIndex = i;
				*colIndex = j;
			}
		}
	}
}
