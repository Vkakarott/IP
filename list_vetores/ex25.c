// LOTERIA

#include <stdio.h>

int main(){
    int cT, i, j, k;
    int mega[6];
    int jogo[6];

    for (i =0; i < 6; i++){
        scanf("%d", &mega[i]);
    }
    scanf("%d", &cT);
    int sena = 0, quina = 0, quadra = 0;
    for (i = 0; i < cT; i++){
        int acertos = 0;
        for (j = 0; j < 6; j++){
            scanf("%d", &jogo[j]);
            for (k= 0; k < 6; k++){
                if (jogo[j] == mega[k]){
                    acertos++;    
                }
            }
        }
        if (acertos == 6){
            sena++;
        } else if (acertos == 5){
            quina++;
        } else if (acertos == 4){
            quadra++;
        } 
    }
    if(sena){
        printf("Houve %d acertador(es) da sena\n", sena);
    } else {
        printf("Nao houve acertador para sena\n");
    }
    if(quina){
        printf("Houve %d acertador(es) da quina\n", quina);
    } else {
        printf("Nao houve acertador para quina\n");
    }
    if(quadra){
        printf("Houve %d acertador(es) da quadra\n", quadra);
    } else {
        printf("Nao houve acertador para quadra\n");
    }
}