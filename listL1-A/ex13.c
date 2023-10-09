// SISTEMA DE EQUAÇÃO LINEAR

#include <stdio.h>

int main() {
    double a, b, c, d, e, f, x, y;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    scanf("%lf", &e);
    scanf("%lf", &f);

    x = (c * e - b * f) / (a * e - b * d);
    y = (c * d - a * f) / (b * d - a * e);

    printf("O VALOR DE X E = %.2lf\nO VALOR DE Y E = %.2lf\n", x, y);
}