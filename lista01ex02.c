//ler a temperatura em fahrenheit e imprimir em ceulcius
//ler a quantidaded de chuva em polegadas e imprimir em milimetros

//entrada em f e polegadas
//saida O VALOR EM CELSIUS = X, A QUANTIDADE DE CHUVA E = Y com duas casas decimais

#include <stdio.h>

int main() {
    double tem, chu, cel, pol;

    scanf("%lf", &tem);
    scanf("%lf", &chu);

    cel = ((tem - 32) * 5) / 9;
    pol = chu * 25.4;

    printf("O VALOR EM CELSIUS = %.2lf\nA QUANTIDADE DE CHUVA E = %.2lf", cel, pol);
}
