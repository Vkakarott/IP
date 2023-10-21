// CALCULO DA RAIZ QUADRADA

#include <stdio.h>
#include <math.h>

int main() {
    double n, erro;
    
    scanf("%lf%lf", &n, &erro);

    double rk = 1.0;

    while (fabs(n - rk * rk) > erro) {
        rk = 0.5 * (rk + n / rk);
        printf("r: %.9lf, erro: %.9lf\n", rk, fabs(n - rk * rk));
    }

    return 0;
}