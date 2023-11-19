// ALITERACAO

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[201];
    char clr[101];
    int i, j;

    while(scanf("%[^\n]", str) != EOF){
        getchar();
        clr[0] = tolower(str[0]);
        int index = 1;
        for(i = 0; i < strlen(str); i++){
            if(str[i] == ' '){
                clr[index] = tolower(str[i+1]);
                index++;
            }
        }
        int alt = 0;
        for(i = 0; i < (strlen(clr) - 1); i++){
            if (clr[i] == '0') continue;
            int repeat = 0;
            if (clr[i] == clr[i+1]){
                repeat = 1;
                clr[i+1] = '0';
                for(j = i + 2; j < strlen(clr); j++){
                    if(clr[i] == clr[j]){
                        clr[j] = '0';
                    } else {
                        break;
                    }
                }
            } 
            if(repeat){
                alt++;
            }
        }
        printf("%d\n", alt);
    }
}