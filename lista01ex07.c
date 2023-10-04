// CALCULO DA AREA DE UM TRIANGULO

// entrada = l1, l2, l3
// A AREA DO TRIANGULO E = x

// t = (l1 + l2 + l3) / 2
// a = raiz (t - l1)(t-l2)(t-l3)

#include <stdio.h>
#include <math.h>

int main() {
    double l1, l2, l3, t, a, r = 0.0;

    scanf("%lf", &l1);
    scanf("%lf", &l2);
    scanf("%lf", &l3);

    t = (l1 + l2 + l3) / 2;
    r = t * (t - l1) * (t - l2) * (t - l3);
    a = sqrt(r);

    printf("A AREA DO TRIANGULO E = %.2lf", a);
    return 0;
}