// QUADRADO DE PARES

#include <stdio.h>

int main(){
    int inp, bas, expo, res;

    scanf("%d", &inp);
    for(bas = 2; bas <= inp; bas+=2){
        res = bas * bas;
        printf("%d^2 = %d\n", bas, res);
    }
}