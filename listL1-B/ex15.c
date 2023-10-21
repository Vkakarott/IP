// NUMERO PALINDROMO

#include <stdio.h>
#include <stdbool.h>

bool isP(int n){
    char nS[5];
    int length = 0;
    int i;

    while (n != 0){
        nS[length] = '0' + (n%10);
        n/=10;
        length++;
    }

    for (i = 0; i < length / 2; i++){
        if (nS[i] != nS[length - 1 - i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;

    scanf("%d", &n);

    if(n > 99999){
        printf("NUMERO INVALIDO\n");
    } else if(isP(n)){
        printf("PALINDROMO\n");
    } else {
        printf("NAO PALINDROMO\n");
    }
}