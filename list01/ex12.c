// VALOR EM NOTAS E MOEDAS

#include <stdio.h>

int main() {
    int e, cem, cin, dez, um;

    scanf("%d", &e);

    cem = e / 100;
    cin = (e % 100) / 50;
    dez = ((e % 100) % 50) / 10;
    um = (((e % 100) % 50) % 10) / 1;

    printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n", cem, cin, dez, um);
}