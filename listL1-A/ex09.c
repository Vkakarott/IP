// DECOLAGEM

#include <stdio.h>

int main() {
    double m, a, t, x, y, z;

    //ENTRADAS
    scanf("%lf", &m); //toneladas
    scanf("%lf", &a); //ms2
    scanf("%lf", &t); //s

    //CALCULOS
    x = a*t;
    y = (a*(t*t))/2;
    z = ((m*1000)*(x*x))/2;
    x *= 3.6;

    //SAIDA
    printf("VELOCIDADE = %.2lf\nESPACO PERCORRIDO = %.2lf\nTRABALHO REALIZADO = %.2lf\n", x, y, z);
}