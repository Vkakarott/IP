// DECOMPOSICAO DE FATORES PRIMOS

#include <stdio.h>

int main(){
    int n, f, uF;
    int firstF = 1;

    do{
        scanf("%d", &n);
        if(n <= 1){
            printf("Fatoracao nao e possivel para o numero %d!\n", n);
        }
    } while (n <= 1);

    printf("%d =", n);

    f = n;
    uF = 2;
    
    while(f > 1){
        if (f % uF == 0) {
            if (firstF) {
                printf(" %d", uF);
                firstF = 0;
            } else {
                printf(" x %d", uF);
            }
            f /= uF;
        } else {
            uF++;
        }
    }
    printf("\n");
}