#include <stdio.h>
int dig_prod(int n){
	if(n >= 0 && n<10){
		return n;
	}
	return n%10 * dig_prod(n/10);
}

int main(){
	printf("Enter a number: ");
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", dig_prod(num));
	return 0;
}
