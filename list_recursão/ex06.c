#include <stdio.h>

int count(int n){
    if (n == 0) return 0;
    if (n % 2 == 0) return 3 + count(n-1);
    else return 2 + count(n-1);
}

int main(){
    int t, n, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++){
        scanf("%d", &n);
        printf("%d\n", count(n));
    }
    return 0;
}