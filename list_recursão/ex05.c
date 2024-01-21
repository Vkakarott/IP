#include <stdio.h>

int soma(int v[], int tam){
    if (tam == 0) return 0;
    return v[tam-1] + soma(v, tam-1);
}

int main(){
    int t, i, j;
    scanf("%d", &t);
    for (i = 0; i < t; i++){
        int tam;
        scanf("%d", &tam);
        int v[tam];
        for (j = 0; j < tam; j++){
            scanf("%d", &v[j]);
        }
        printf("%d\n", soma(v, tam));
    }
}