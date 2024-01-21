#include <stdio.h>

int logD(int x){
    if (x == 1) return 0;
    return 1 + logD(x/2);
}

int main(){
    int t, x, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++){
        scanf("%d", &x);
        printf("%d\n", logD(x));
    }
    return 0;
}