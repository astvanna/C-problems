#include <stdio.h>
#include <stdlib.h>

int fib(int n){
	if(n < 0){
		exit(-1);
	} else if (n >= 0 && n < 2){
		return n;
	} else{
	return fib(n-1) + fib(n-2);
	}
}

int main(){
	printf("Enter which number of the sequence: ");
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", fib(num));
	return 0;
}
