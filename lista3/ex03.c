// QUANTAS LETRAS?
 
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main(){
    int Ct, i;
    char F[100000];
 
    scanf("%d", &Ct);
    Ct++;
    while(Ct--){
        fgets(F, sizeof(F), stdin);
 
        int vogais = 0;
        int consoantes = 0;
        int letras = 0;
        for(i = 0; i < strlen(F); i++){
            if (isalpha(F[i])){
                letras++;
                if (tolower(F[i]) == 'a' || tolower(F[i]) == 'e' || tolower(F[i]) == 'i' || tolower(F[i]) == 'o' || tolower(F[i]) == 'u'){
                    vogais++;
                } else {
                    consoantes++;
                }
            }
        }
        if(letras){
            printf("Letras = %d\nVogais = %d\nConsoantes = %d\n", letras, vogais, consoantes);
        }
    }
}