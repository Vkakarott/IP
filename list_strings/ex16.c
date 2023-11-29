// LIMPA STRING

#include <stdio.h>
#include <string.h>

int str_clean(char str[], char clr[]){
    int i, j, k;
    for(i = 0; i < strlen(clr); i++){
        for(j = 0; j < strlen(str); j++){
            if(str[j] == clr[i]){
                for(k = j; k < strlen(str); k++){
                    str[k] = str[k+1];
                }
                j--;
            }
        }
    }
}

int main(){
    char str[257];
    char clr[257];
    scanf("%[^\n]", str);
    scanf("\n%[^\n]", clr);
    str_clean(str, clr);
    printf("%s\n", str);
    return 0;
}