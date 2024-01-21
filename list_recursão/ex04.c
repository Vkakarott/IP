#include <stdio.h>

int soma(int n){
    if (n == 0) return 0;
    return n + soma(n-1);
}

int main(){
    int n, t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++){
        scanf("%d", &n);
        printf("%d\n", soma(n));
    }
    return 0;
}