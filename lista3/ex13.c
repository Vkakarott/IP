// AVANCE AS LETRAS

#include <stdio.h>
#include <string.h>

char proximaLetra(char letra) {
    if (letra == 'z') {
        return 'a';
    } else {
        return letra + 1;
    }
}

int main(){
    char str[100000];
    char str2[100000];
    int cT, i;

    scanf("%d", &cT);

    while(cT--){
        scanf("%s", str);
        scanf("%s", str2);  
        int tamanho = strlen(str);
        int count = 0;
        for (i = 0; i < tamanho; i++){
            while (str[i] != str2[i]) {
                str[i] = proximaLetra(str[i]);
                count++;
                if (str[i] == str2[i]) {
                    break;
                }
            }
        }
        printf("%d\n", count);
    }
}