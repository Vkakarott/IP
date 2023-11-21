#include <stdio.h>
#include <string.h>

int main(){
    char str[201];
    int i;

    while(scanf("%s", str) != EOF){
        int j = strlen(str);
        int palindromo = 1;
        for(i = 0; i < (j/2); i++){
            if(str[i] != str[j-i-1]){
                palindromo = 0;
            }
        }
        if(palindromo) printf("sim\n");
        else printf("nao \n");
    }
}