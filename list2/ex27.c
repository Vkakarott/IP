// INTERCALA

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

int main(){
    int i, q1, q2;
    int V1[1000000];
    int V2[1000000];

    scanf("%d", &q1);
    scanf("%d", &q2);
    for (i = 0; i < q1; i++){
        scanf("%d", &V1[i]);
    }
    for (i = 0; i < q2; i++){
        scanf("%d", &V2[i]);
    }
    int tm = q1 + q2;
    int *VI = (int *)malloc(tm * sizeof(int));
    for (i = 0; i < q1; i++){
        VI[i] = V1[i];
    }
    for (i = 0; i < q2; i++){
        VI[q1 + i] = V2[i];
    }

    qsort(VI, tm, sizeof(int), compare);

    for (i = 0; i < tm; i++){
        printf("%d \n", VI[i]);
    }
}