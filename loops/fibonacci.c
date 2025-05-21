#include <stdio.h>
int main(){
	int i = 0;
	int prev_fibonacci = 0;
	int next_fibonacci = 0;
	int n = 0;

	printf("Enter which number of the fibonacci sequence you want to know: ");
	scanf("%d", &n);

	next_fibonacci = 1;
	for(i=1; i<n; i++){
		int cup = next_fibonacci;
		next_fibonacci = prev_fibonacci + next_fibonacci;
		prev_fibonacci = cup;
	}

	printf("%drd fibonacci is %d \n", n, next_fibonacci);
	return 0;

}
