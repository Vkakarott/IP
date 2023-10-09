// ARRECADACAO DE JOGOS

#include <stdio.h>

int main(){
    int cas, i, tot;
    double tes, pop, ger, arq, cad, ren;

    scanf("%d", &cas);
    for(i = 1; i <= cas; i++){
        scanf("%d %lf %lf %lf %lf", &tot, &pop, &ger, &arq, &cad);
        pop = tot*pop/100;
        ger = tot*ger/100*5;
        arq = tot*arq/100*10;
        cad = tot*cad/100*20;
        ren = pop + ger + arq + cad;
        printf("A RENDA DO JOGO N. %d E = %.2lf\n", i, ren);
    }
}