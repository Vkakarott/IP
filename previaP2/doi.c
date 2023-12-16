#include <stdio.h>

void isPar(int *A, int temp, int *index){
    if(temp%2 == 0){
        A[*index] = temp;
        (*index)++;
    }
}

void isImpar(int *B, int temp, int *index){
    if(temp%2 != 0){
        B[*index] = temp;
        (*index)++;
    }
}

void Concatena(int *A, int *B, int *C, int T1, int T2){
    int i;
    int index = 0;
    for(i = 0; i < T1+T2; i++){
        if(i < T1){
            C[index] = A[i];
            index++;
        }
        if(i < T2){
            C[index] = B[i];
            index++;
        }
    }
}

int main(){
    int N, M;
    int temp;
    int A[5000], B[5000], C[10000];
    int i;
    int index = 0;

    scanf("%d %d", &N, &M);
    for(i = 0; i < N; i++){
        scanf("%d", &temp);
        isPar(A, temp, &index);
    }
    int T1 = index;
    index = 0;
    for(i = 0; i < M; i++){
        scanf("%d", &temp);
        isImpar(B, temp, &index);
    }
    int T2 = index;
    Concatena(A, B, C, T1, T2);
    for(i = 0; i < T1+T2; i++){
        printf("%d ", C[i]);
    }

    return 0;
}