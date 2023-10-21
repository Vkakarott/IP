// FATORIAL

#include <stdio.h>

int main(){
    int n, f, i;

    scanf("%d", &n);

    if(n == 0){
        printf("0! = 1\n");
        return 0;
    }
    f = n;
    for(i = 1;i < n;i++){
        f *= i;
    }
    printf("%d! = %d", n, f);
}