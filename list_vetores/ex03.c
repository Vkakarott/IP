// IMPRIMIR UM VETOR NA ORDEM INVERSA

#include <stdio.h>

int main(){
    int N, i;
    int V[100];

    scanf("%d", &N);
    for (i = 0; i < N; i++){
        int in = N - i - 1;
        scanf("%d", &V[in]);
    }
    for (i = 0; i < N; i++){
        printf("%d ", V[i]);
    }
}