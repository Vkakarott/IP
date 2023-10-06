// QUATRO ALGARISMOS

#include <stdio.h>

int main() {
    int n1, n2, n3, n4;

    scanf("%1d%1d%1d", &n1, &n2, &n3);

    n4 = (n1 + n2*3 + n3*5) % 7;

    printf("O NOVO NUMERO E = %d%d%d%d\n", n1, n2, n3, n4);
}
