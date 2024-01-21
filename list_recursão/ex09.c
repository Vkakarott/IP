#include <stdio.h>

int pow(int b, int e){
    if (e == 0) return 1;
    return b * pow(b, e - 1);
}

int main(){
    int t, i, b, e;
    scanf("%d", &t);
    for (i = 0; i < t; i++){
        scanf("%d %d", &b, &e);
        printf("%d\n", pow(b, e));
    }
    return 0;
}