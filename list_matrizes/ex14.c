// FREQUENCIA DO MAIOR E MENOR
 
#include <stdio.h>
 
int main(){
    int L, C;
    int i, j;
 
    scanf("%d %d", &L, &C);
 
    int M[L][C];
    int len = L*C;
 
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            scanf("%d", &M[i][j]);
        }
    }
    int max = M[0][0];
    int min = M[0][0];
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            if(M[i][j] > max){
                max = M[i][j];
            }
            if(M[i][j] < min){
                min = M[i][j];
            }
        }
    }
    int count_min = 0;
    int count_max = 0;
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            if(M[i][j] == min) count_min++;
            else if (M[i][j] == max) count_max++;
        }
    }
    double pct_min = (double) count_min*100/len;
    double pct_max = (double) count_max*100/len;
    printf("%d %.2lf%\n%d %.2lf%\n", min, pct_min, max, pct_max); 
}