#include <stdio.h>

char find_first_upper(const char *str){
	if (*str == '\0'){
		return '\0';
	}
	if (*str >= 'A' && *str <= 'Z'){
		return *str;
	}
	return find_first_upper(str + 1);
}

int main(){
	char str[] = "lurJes1asUm";
	printf("First upper is: %c\n", find_first_upper(str));
	return 0;
}
