#include <stdio.h>
 
int PosPrimoDiagPMatriz(int M[500][500], int N, int *TemPrimo){
    int i, j;
    int P[7] = { 3, 5, 7, 11, 13, 17, 19};
    for(i = 0; i < N; i++){
        for(j = 0; j < 7; j++){
            if(M[i][i] == P[j]) {
                *TemPrimo = 1;
                return i;
            }
        }
    }
    *TemPrimo = 0;
    return N - 1;
}
 
int MatrizPMod(int M[500][500], int S[500][500], int N, int pos){
    int i, j;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(pos%2 == 0){
                if(j%2 == 0) S[i][j] = M[i][j];
                else S[i][j] = M[i][j]*M[pos][pos];
            } else {
                if(j%2 == 0) S[i][j] = M[i][j]*M[pos][pos];
                else S[i][j] = M[i][j];
            }
        }
    }
}
 
int MatrizMod(int M[500][500], int S[500][500], int N, int pos){
    int i, j;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(i%2 != 0){
                S[i][j] = M[i][j]*M[pos][pos];
            } else S[i][j] = M[i][j];
        }
    }
}
 
int printM(int S[500][500], int N){
    int i, j;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("%d ", S[i][j]);
        }
        printf("\n");
    }
}
 
int main(){
    int M[500][500];
    int S[500][500];
    int i, j, k;
    int N;
    int pos;
    int temPrimo;
 
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            scanf("%d", &M[i][j]);
        }
    }
    pos = PosPrimoDiagPMatriz(M, N, &temPrimo);
    if(temPrimo) MatrizPMod(M, S, N, pos);
    else MatrizMod(M, S, N, pos);
    printM(S, N);
}