#include <stdio.h>

int main(){
    int a, b, s = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    while (b > a){
        a += (a*0.03);
        b += (b*0.015);
        s += 1;
    }
    

    printf("ANOS = %d\n", s);
}