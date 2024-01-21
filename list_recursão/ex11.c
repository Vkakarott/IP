
#include <stdio.h>

int produto(int m, int n) {
    if (n == 0) return 0;
    return m + produto(m, n - 1);
}

int main(){
    int t, m, n, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++){
        scanf("%d %d", &m, &n);
        printf("%d\n", produto(m, n));
    }
    return 0;
}