#include <stdio.h>

void tamanho(int *A, int *B){
    int tamC = sizeof(A) / sizeof(A[0]) + sizeof(B) / sizeof(B[0]);
    printf("t: %d\n", tamC);
}

int main(){
    int N, M;
    int A[5000], B[5000];
    int i;

    scanf("%d %d", &N, &M);
    for(i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    for(i = 0; i < M; i++){
        scanf("%d", &B[i]);
    }
    tamanho(A, B);
    return 0;
}