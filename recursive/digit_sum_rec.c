#include <stdio.h>
int dig_sum(int n){
        if(n >= 0 && n<10){
                return n;
        }
        return n%10 + dig_sum(n/10);
}

int main(){
        printf("Enter a number: ");
        int num = 0;
        scanf("%d", &num);
        printf("%d\n", dig_sum(num));
        return 0;
}

