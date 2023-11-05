// ACUMULADO DE ELEMENTOS

#include <stdio.h>

int main(){
    int N, i;
    int V[100];

    do {
        scanf("%d", &N);
        if (N > 0){
            for (i = 0; i < N; i++){
                scanf("%d", &V[i]);
            }
            int max = 0;
            for (i = 0; i < N; i++){
                if(V[i] > max){
                    max = V[i];
                }
            }
            int count = 0;
            for (i = 0; i <= max; i++){
                int j;
                for (j = 0; j < N; j++){
                    if (V[j] <= i){
                        count += 1;
                    }
                }
                printf("(%d) %d \n", i, count);
                count = 0;
            }
        }
    } while (N > 0);
}