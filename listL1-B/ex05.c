// CONVERSAO DE NOTA EM CONCEITO

#include <stdio.h>

int main(){
    double n;

    scanf("%lf", &n);

    printf("NOTA = %.1lf", n);

    if((n >= 9) && (n <= 10)){
        printf(" CONCEITO = A\n");
    } else if((n >= 7.5) && (n < 9)){
        printf(" CONCEITO = B\n");
    } else if((n >= 6) && (n < 7.5)){
        printf(" CONCEITO = C\n");
    } else if((n >= 0) && (n < 6)){
        printf(" CONCEITO = D\n");
    }
}