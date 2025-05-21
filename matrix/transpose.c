void transposeMatrix(int matrix[][N], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			int temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}
}
