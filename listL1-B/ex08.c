// ANO BISSEXTO

#include <stdio.h>

int main(){
    int ano;

    scanf("%d", &ano);

    if(ano > 1582){
        if(ano%100 == 0){
            if(ano%400 == 0){
                printf("ANO BISSEXTO\n");
                return 0;
            }
        } else if(ano%4 == 0){
            printf("ANO BISSEXTO\n");
            return 0;
        }
    }
    
    printf("ANO NAO BISSEXTO\n");
}