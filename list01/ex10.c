// QUATRO ALGARISMOS

#include <stdio.h>

int main() {
    int a, b, c, d;

    //ENTRADAS
    scanf("%d", &a);

    //CALCULO
    d = a*10;
    c = a % 10;
    b = a % 100;
    a = (a - b)/100;
    b = (b - c)/10;
    d = d +((a+(b*3)+(c*5))%7);

    //SAIDA
    printf("O NOVO NUMERO E = %d\n", d);
}