#include <stdio.h>

int PEDVM(int v[], int tam, int i){
    if (i == tam - 1) return printf("FALSO\n");
    if ((v[i] * 10) == v[i + 1]) return printf("VERDADEIRO\n");
    return PEDVM(v, tam, i + 1);
}

int main(){
    int t, i, j, tam;
    scanf("%d", &t);
    for (i = 0; i < t; i++){
        scanf("%d", &tam);
        int v[tam];
        for (j = 0; j < tam; j++) scanf("%d", &v[j]);
        PEDVM(v, tam, 0);
    }
    return 0;
}