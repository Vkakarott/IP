// ZERO VALE ZERO

#include <stdio.h>
#include <string.h>

int main(){
    int M, N, soma, i;
    char str[10];

    do{
        scanf("%d %d", &M, &N);
        soma = M + N;
        if (M == 0 && N == 0){
            break;
        }
        sprintf(str, "%d", soma);

        for(i = 0; i < strlen(str); i++){
            if(str[i] != '0'){
                printf("%c", str[i]);
            }
        }
        printf("\n");
    } while (M != 0 || N != 0);
}