// LOTERIA

#include <stdio.h>

int main(){
    int N, i, j, k;
    int jogo[6];

    scanf("%d", &N);
    int mega[N+1][6];

    for(i = 0; i <= N; i++){
        for (j = 0; j < 6; j++){
            scanf("%d", &mega[i][j]);
        }
    }
    int sena = 0, quina = 0, quadra = 0;
    for(i = 0; i < N; i++){
        int acertos = 0;
        for (j = 0; j < 6; j++){
            for (k = 0; k < 6; k++){
                if (mega[i][j] == mega[N][k]){
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