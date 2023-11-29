// CADE O WALLY?

#include <stdio.h>

int main(){
    int L, C;
    int i, j, k;

    scanf("%d %d", &L, &C);
    int M[L][C];

    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            scanf("%d", &M[i][j]);
        }
    }
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            if(M[i][j] == 1111){
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    printf("WALLY NAO ESTA NA MATRIZ\n");
}