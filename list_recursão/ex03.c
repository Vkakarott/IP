#include <stdio.h>

int dividir(int n, int v[], int *tam){
    int inv = 0;
    *tam = 0;

    while (n > 0){
        int digito = n % 10;
        inv = inv * 10 + digito;
        n /= 10;
        (*tam)++;
    }
    int i = 0;
    while (inv > 0){
        int digito = inv % 10;
        v[i] = digito;
        inv /= 10;
        i++;
    }
}

int contarCinco(int n[], int tam){
    if (tam == 0) return 0;
    if (n[tam-1] == 5) return 1 + contarCinco(n, tam-1);
    return contarCinco(n, tam-1);
}

int main(){
    int t, i, j;
    int v[100], tam;
    scanf("%d", &t);
    for (i = 0; i < t; i++){
        int n = 0;
        for (j = 0; j < 100; j++) v[j] = 0;
        scanf("%d", &n);
        dividir(n, v, &tam);
        printf("%d\n", contarCinco(v, tam));
    }
}