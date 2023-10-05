// CUSTO FINAL DE UM CARRO

// entrada = preco de fabrica, distribuidor e impostos
// O VALOR DO CARRO E = z

#include <stdio.h>

int main() {
    double x, y, z, f;

    scanf("%lf", &f);
    scanf("%lf", &x);
    scanf("%lf", &y);

    x = x / 100 * f;
    y = y / 100 * f;
    z = f + x + y;

    printf("O VALOR DO CARRO E = %.2lf\n", z);
}