// MENOR DISTANCIA

#include <stdio.h>

int main(){
    int T, N, i, j, k;
    int V[100];

    scanf("%d", &T);
    for (i = 0; i < T; i++){
        scanf("%d", &N);
        for (j = 0; j < N; j++){
            scanf("%d", &V[j]);
        }
        int count = 0;
        int Md = 1000000;
        for (j = 0; j < N - 1; j++){
            for (k = j + 1; k < N; k++){
                int dist = 0;
                if(V[j] > V[k]){
                    dist = V[j] - V[k];
                } else {
                    dist = V[k] - V[j];
                }
                if(dist < Md){
                    Md = dist;
                }
                count += 1;
            }
        }
        printf("%d %d\n", Md, count);
    }
}