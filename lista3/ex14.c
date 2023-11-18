// SENTENCA DANCANTE

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i;
    char str[51];

    while(scanf(" %[^\n]", str) != EOF){
        int M = 1;
        for (i = 0; i < strlen(str); i++){
            if (isalpha(str[i])){
                if (M){
                    str[i] = toupper(str[i]);
                    M = 0;
                } else {
                    str[i] = tolower(str[i]);
                    M = 1;
                }
            }
        }
        printf("%s\n", str);
    }
}