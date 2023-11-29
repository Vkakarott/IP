// UNIAO E INTERSECCAO DE CONJUNTOS
 
#include <stdio.h>
 
int main(){
    int i, j, u;
    int V[2];
    int A[100];
    int B[100];
    int I[100];
    int U[100];
    int conj = 0;
    int temp;
 
    while (conj != 2){
        scanf("%d", &temp);
        if (temp > 0 && temp < 100){
            V[conj] = temp;
            conj ++;
        }
    };
    i = 0;
    while (i < V[0]){
        scanf("%d", &temp);
        if(i == 0){
            A[i] = temp;
            i++;
        } else {
            int repeat = 0;
            for (j = 0; j < i; j++){
                if(temp == A[j]){
                    repeat = 1;
                }
            }
            if (!repeat){
                A[i] = temp;
                i++;
            }
        }
    }
    i = 0;
    while (i < V[1]){
        scanf("%d", &temp);
        if(i == 0){
            B[i] = temp;
            i++;
        } else {
            int repeat = 0;
            for (j = 0; j < i; j++){
                if(temp == B[j]){
                    repeat = 1;
                }
            }
            if (!repeat){
                B[i] = temp;
                i++;
            }
        }
    }
    
    for (u = 0; u < V[0]; u++){
        U[u] = A[u];
    }
    int k = u;
    int l = 0;
    for (i = 0; i < V[1]; i++){
        int repeat = 0;
        for (j = 0; j < V[0]; j++){
            if (B[i] == A[j]){
                repeat = 1;
                I[l] = B[i];
                l++;
            }
        }
        if (!repeat){
            U[k] = B[i];
            k++;
        }
    }
    i = 0;
    while(i < k){
        if (i == 0) {
            printf("(%d", U[i]);
        } else {
            printf(",%d", U[i]);
        }
        i++;
    }
    printf(")\n");
    i = 0;
    while(i < l){
        if (i == 0) {
            printf("(%d", I[i]);
        } else {
            printf(",%d", I[i]);
        }
        i++;
    }
    printf(")\n");
}