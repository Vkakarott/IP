// ACHEI

#include <stdio.h>

int main(){
    int N, M, P, i, j;
    int V[100];

    scanf("%d", &N);

    for (i = 0; i < N; i++){
        scanf("%d", &V[i]);
    }

    scanf("%d", &M);
    for (i = 0; i < M; i++){
        scanf("%d", &P);
        int found = 0;
        for(j = 0; j < N; j++){
            if (P == V[j]){
                found = 1;
                break;
            }
        }
        if (found){
            printf("ACHEI\n");
        } else {
            printf("NAO ACHEI\n");
        }
    }
}