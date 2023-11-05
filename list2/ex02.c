// CONTAGEM

#include <stdio.h>

int main(){
    int N, K, i;
    int V[100];

    do {
        scanf("%d", &N);
    } while (N < 1 || N > 1000);

    for (i = 0; i < N; i++){
        scanf("%d", &V[i]);
    }

    scanf("%d", &K);
    int count = 0;
    for (i = 0; i < N; i++){
        if (V[i] > K){
            count += 1;
        }
        }
    printf("%d\n", count);
}