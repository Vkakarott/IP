// IMPRIME MATRIZ ESPIRAL

#include <stdio.h>

int main(){
    int M[10][10];
    int i, j, k;
    int L, C;
    int cont = 0;

    scanf("%d %d", &L, &C);
    if((L > 10 || L < 0) || (C > 10 || C < 0)){
        printf("Dimensao invalida\n");
        return 0;
    }
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            scanf("%d", &M[i][j]);
        }
    }
    int sup = 0;
    int esq = 0;
    int inf = L - 1;
    int dir = C -1;
    while (cont < L*C){
        for(i = esq; i <= dir; i++)
        {
             printf("%d ", M[sup][i]);
             cont++;
        }
        if(cont==L*C) {
            printf("\n");
            return 0;
        }
        for(i = sup +1; i <= inf; i++)
        { 
            printf("%d ", M[i][dir]); 
            cont++;
        }
        if(cont==L*C) {
            printf("\n");
            return 0;
        }
        for(i = dir -1; i >= esq; i--)
        { 
            printf("%d ", M[inf][i]); 
            cont++;
        }
        if(cont==L*C) {
            printf("\n");
            return 0;
        }
        for(i = inf -1; i > sup; i--)
        { 
            printf("%d ", M[i][esq]); 
            cont++;
        }
        if(cont==L*C) {
            printf("\n");
            return 0;
        }
        sup++;
        esq++;
        inf--;
        dir--;
    }
    printf("\n");
    return 0;
}
