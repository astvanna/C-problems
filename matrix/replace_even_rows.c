void replaceEvenRows(int matrix[][N], int size) {
	for (int i = 0; i < size; i += 2) {
		for (int j = 0; j < size; j++) {
			matrix[i][j] = 0;
		}
	}
}
