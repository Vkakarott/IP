#include <stdio.h>

int main(){
    int nR , i; //Numero de registros
    int dM; //Distanci maxima
    int N; //Norte
    int S; //Sul
    int L; //Leste
    int O; //Oeste
    int T; //Armazena valor temporario
    char c[10] = {};

    scanf("%d %d", &nR, &dM);

    for(i = 0; i < nR; i++){
        scanf(" %c", &c[i]);
        if(c[i] == 'N'){
            scanf("%d", &T);
            N += T;
        } else if(c[i] == 'S'){
            scanf("%d", &T);
            S += T;
        } else if(c[i] == 'L'){
            scanf("%d", &T);
            L += T;
        } else if(c[i] == 'O'){
            scanf("%d", &T);
            O += T;
        }
    }
    if(N > dM || S > dM || L > dM || O > dM){
        printf("1\n");
    } else {
        printf("0\n");
    }
}