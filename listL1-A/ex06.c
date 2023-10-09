// TEMPO EM SEGUNDOS

// entrada = horas, minutos, segundos
// saida -> O TEMPO EM SEGUNDOS E = x

#include <stdio.h>

int main() {
    int h, m, s;

    scanf("%d", &h);
    scanf("%d", &m);
    scanf("%d", &s);

    s = s + (m * 60) + (h * 3600);

    printf("O TEMPO EM SEGUNDOS E = %d\n", s);
}
