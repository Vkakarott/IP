// TROCA MAIOR E MENOR
 
#include <stdio.h>
 
int main(){
    int L, C;
    int i, j, k, l, m;
 
    scanf("%d %d", &L, &C);
 
    int M[L][C];
 
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            scanf("%d", &M[i][j]);
        }
    }
    int max = M[0][0];
    int min = M[0][0];
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            if(M[i][j] > max){
                max = M[i][j];
            }
            if(M[i][j] < min){
                min = M[i][j];
            }
        }
    }
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            if(M[i][j] == max) printf("%d ", min);
            else if(M[i][j] == min) printf("%d ", max);
            else printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}