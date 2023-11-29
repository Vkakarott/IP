// VALIDA SUDOKU
 
#include <stdio.h>
 
int main(){
    int S[9][9];
    int i, j, k;
 
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            scanf("%d", &S[i][j]);
        }
    }
    //verificacao de linhas
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            for(k = 1; k < 9; k++){
                if(j != k && S[i][j] == S[i][k]) {
                    printf("invalido\n");
                    return 0;
                }
                if(j != k && S[j][i] == S[j][k]) {
                    printf("invalido\n");
                    return 0;
                }
            }
        }
    }
    //verificacao de quadrados
    for(i = 0; i < 9; i += 3){
        for(j = 0; j < 9; j += 3){
            for(k = 0; k < 9; k++){
                if(k != j && S[i][j] == S[i][k]) {
                    printf("invalido\n");
                    return 0;
                }
                if(k != j && S[i+1][j] == S[i+1][k]) {
                    printf("invalido\n");
                    return 0;
                }
                if(k != j && S[i+2][j] == S[i+2][k]) {
                    printf("invalido\n");
                    return 0;
                }
            }
        }
    }
    printf("valido\n");
}