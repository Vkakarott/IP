#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if(n < 1 || n > 9999)
        printf("Numero inválido!\n");
    else if (n < 10)
        printf("(primeira ordem) %d = %d unidades\n", n, n);
    else if (n < 100)
        printf("(segunda ordem) %d = %d dezenas + %d unidades = %d + %d\n", n, n/10, n%10, (n/10)*10, n%10);
    else if (n < 1000)
        printf("(terceira ordem) %d = %d centenas + %d dezenas + %d unidades = %d + %d + %d\n", n, n/100, (n%100)/10, n%10, (n/100)*100, ((n%100)/10)*10, n%10);
    else
        printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezenas + %d unidades = %d + %d + %d + %d\n", n, n/1000, (n%1000)/100, (n%100)/10, n%10, (n/1000)*1000, ((n%1000)/100)*100, ((n%100)/10)*10, n%10);

    return 0;
}