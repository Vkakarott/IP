// VOLUME DA PIRAMIDE DE BASE HEXAGONAL

// v = 1/3 * ab * h
// ab = (3 * (a * a) * (raiz de 3)) / 2

// entrada h(altura da piramide) a(aresta do hexagono)
//saida -> O VOLUME DA PIRAMIDE E = x METROS CUBICOS

#include <stdio.h>
// Biblioteca de matematica
#include <math.h>

int main() {
    double v, ab, h, a;

    scanf("%lf", &h);
    scanf("%lf", &a);

    ab = (3 * (a * a) * (sqrt(3))) / 2;
    v = (1.0 / 3.0) * ab * h;

    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", v);
}