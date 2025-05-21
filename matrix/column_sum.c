int* createColumnSumArray(int matrix[][N], int size) {
	int *sumArray = (int*)malloc(size * sizeof(int));
	
	for (int j = 0; j < size; j++) {
		sumArray[j] = 0;
		for (int i = 0; i < size; i++) {
			sumArray[j] += matrix[i][j];
		}
	}
	
	return sumArray;
}
