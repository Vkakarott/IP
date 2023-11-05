// MAIOR ELEMENTO

#include <stdio.h>

int main(){
    int N, i;
    int V[100];

    do {
        scanf("%d", &N);
        for(i = 0; i < N; i++){
            scanf("%d", &V[i]);
        }
        int M = 0;
        int index = 0;
        for(i = 0; i < N; i++){
            if (V[i] > M){
                M = V[i];
                index = i;
            }
        }
        if (N > 0){
            printf("%d %d\n", index, M);
        }
    } while (N > 0);
}