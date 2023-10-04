// CUSTO DA LATA DE CERVEJA

// 100$ metro quadrado do aluminio

// entrada = raio e altura da lata em metros

// saida = O VALOR DO CUSTO E = XXX,XX

// PI aprox 3.14159

// Area = 2areacir + arealat
//areacir = PI raio*2
//arealat = 2PI raio altura

#include <stdio.h>
#define PI 3.14159

int main() {
    double r, a, ac, al, at, vl;

    //entrada do valor do raio
    scanf("%lf", &r);
    //entrada da altura
    scanf("%lf", &a);

    //calculos
    ac = PI * (r * r);
    al = 2 * PI * r * a;
    at = 2*ac + al;
    vl = at * 100;

    printf("O VALOR DO CUSTO E = %.2lf\n", vl);
}
