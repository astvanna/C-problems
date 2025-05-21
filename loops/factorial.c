#include <stdio.h>

int main(){
	int n = 0;
	printf("Enter a natural number ");
	scanf("%d",&n);

	while(n<0){
		printf("Nope, i said a NATURAL number ");
		scanf("%d",&n);
	}
	int i = 0;
	int factorial = 1;
	for(int i=1;(i>=1)&&(i<=n);i++){
		factorial = factorial*i;
	}
	printf("%d!=%d",n,factorial);
	printf("\n");
	
	return 0;
}
