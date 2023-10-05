// NUMERO INVERTIDO

#include <stdio.h>

int main(){
    int a, b, c, d;

    scanf("%d", &a);

    c = a%10;
    b = a%100;
    a = (a - b)/100;
    b = (b - c);
    c *= 100;
    d = a + b + c;

    printf("%d\n", d);
}