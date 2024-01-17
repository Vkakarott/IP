#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double coeficiente;
    int expoente;
} polinomio;

void impressao(polinomio *resultado, int n) {
    int i;
    int flag = 0;
    for (i = n; i >= 0; i--) {
        if (resultado[i].coeficiente == 0) continue;
        if (!flag){ 
            printf("%.2lfX ∧ %d ", resultado[i].coeficiente, resultado[i].expoente);
            flag = 1;
        }
        else {
            if (resultado[i].coeficiente > 0) printf("+ ");
            if (resultado[i].coeficiente < 0) printf("- ");
            if (resultado[i].expoente == 0) printf("%.2lf", fabs(resultado[i].coeficiente));
            else printf("%.2lfX ∧ %d ", fabs(resultado[i].coeficiente), resultado[i].expoente);
        }
    }
    printf("\n");
}

void soma(polinomio *P, int *p1, int *p2) {
    int i;
    double coeficiente;
    int expoente;
    scanf("%d", p1);
    for (i = 0; i < *p1; i++){
        scanf("%lf %d", &coeficiente, &expoente);
        P[expoente].coeficiente = coeficiente;
        P[expoente].expoente = expoente;
    }
    scanf("%d", p2);
    for (i = 0; i < *p2; i++){
        scanf("%lf %d", &coeficiente, &expoente);
        P[expoente].coeficiente += coeficiente;
        P[expoente].expoente = expoente;
    }
}

void subtracao(polinomio *P, int *p1, int *p2) {
    int i;
    double coeficiente; 
    int expoente;
    scanf("%d", p1);
    for (i = 0; i < *p1; i++){
        scanf("%lf %d", &coeficiente, &expoente);
        P[expoente].coeficiente = coeficiente;
        P[expoente].expoente = expoente;
    }
    scanf("%d", p2);
    for (i = 0; i < *p2; i++){
        scanf("%lf %d", &coeficiente, &expoente);
        P[expoente].coeficiente -= coeficiente;
        P[expoente].expoente = expoente;
    }
}

int main() {
    int t, p1, p2, i;
    char op;
    polinomio *P = malloc(100 * sizeof(polinomio));

    scanf("%d", &t);
    while (t--) {
        scanf(" %c", &op);
        switch (op){
        case '+':
            soma(P, &p1, &p2);
            break;
        case '-':
            subtracao(P, &p1, &p2);
            break;
        default:
            break;
        }
        impressao(P, p1 + p2);
        for (i = 0; i < 100; i++) {
            P[i].coeficiente = 0;
            P[i].expoente = 0;
        }
    }

    return 0;
}