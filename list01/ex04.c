// CALCULO DE DELTA NA EQUACAO DE BASKARA

// Entrada dos coeficientes A B C
// Saida -> O VALOR DE DELTA E = X

#include <stdio.h>

int main() {
    double a, b, c, delta;

    //inputs
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    //calculo de delta
    delta = (b * b) - 4 * a * c;

    printf("O VALOR DE DELTA E = %.2lf\n", delta);

}
