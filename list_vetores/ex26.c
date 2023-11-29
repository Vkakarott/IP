// OS VERDADEIROS 7 ANOES DA BRANCA DE NEVE

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

int main(){
    int cT, i, j, k;
    int *V = (int *)malloc(9 * sizeof(int));
    
    scanf("%d", &cT);
    while(cT){
        for (i = 0; i < 9; i++){
            scanf("%d", &V[i]);
        }
        int sum = 0;
        for (i = 0; i < 9; i++){
            sum += V[i];
        }
        int dif = sum - 100;
        qsort(V, 9, sizeof(int), compare);
        for (i = 0; i < 8; i++){
            for (j = i + 1; j < 9; j++){
                    if (i != j && V[i] + V[j] == dif){
                        for (k = 0; k < 9; k++){
                            if (k != i && k != j){
                                printf("%d\n", V[k]);
                            }
                        }
                    }
            }
        }
        cT--;
    }
}