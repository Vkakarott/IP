// SOMA DE PROGRESSAO ARITIMETICA

#include <stdio.h>

int main(){
    int a1, r, n;

    scanf("%d %d %d", &a1, &r, &n);

    int soma = 0;
    int termo = a1;

    for (int i = 0; i < n; i++) {
        soma += termo;
        termo += r;
    }

    printf("%d\n", soma);
}