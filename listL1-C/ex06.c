// SOMATORIO SIMPLES

#include <stdio.h>

int main(){
    int n, i;
    double s;

    scanf("%d", &n);
    if(n>1){
        for(i = 1; i <= n; i++){
            s += (double)1/i;
        }
        printf("%.6lf\n", s);
    } else {
        printf("Numero invalido!");
    }
}