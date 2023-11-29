// DETERMINANTE 2X2
 
#include <stdio.h>
 
int main(){
    int A[2][2];
    float det;
    int i, j;
 
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &A[i][j]);
        }
    }
    det = (A[0][0]*A[1][1]) - (A[0][1]*A[1][0]);
    printf("%.2lf\n", det);
}