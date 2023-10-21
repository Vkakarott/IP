// DIVISIVEL POR 3 E 5
 
#include <stdio.h>
 
int main(){
    int num;
 
    scanf("%d", &num);
 
    if((num%3 == 00) && (num%5 == 0)){
        printf("O NUMERO E DIVISIVEL\n");
    } else {
        printf("O NUMERO NAO E DIVISIVEL\n");
    }
}