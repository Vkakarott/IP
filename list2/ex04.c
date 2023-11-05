// LER E IMPRIMIR

#include <stdio.h>

int main(){
    int N, i;
    int V[100];

    scanf("%d", &N);
    for (i = 0; i < N; i++){
        scanf("%d", &V[i]);
    }
    for (i = 0; i < N; i++){
        printf("%d ", V[i]);
    }
}