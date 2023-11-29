// CIDADE SEGURA

#include <stdio.h>

int main(){
    int N;
    int i, j, k;

    scanf("%d", &N);
    N++;

    int M[N][N];

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            scanf("%d", &M[i][j]);
        }
    }
    for(i = 0; i < N-1; i++){
        for(j = 0; j < N-1; j++){
            int count = 0;
            if(M[i][j] == 1) count++;
            if(M[i][j+1] == 1) count++;
            if(M[i+1][j] == 1) count++;
            if(M[i+1][j+1] == 1) count++;
            if(count >= 2){
                printf("S");
            } else {
                printf("U");
            }
        }
        printf("\n");
    }
}