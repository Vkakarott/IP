#include <stdio.h>
#include <string.h>

int contarCaracter(char str[], int tamanho){
    if (tamanho < 2) return 0;
    int contagem = (str[tamanho - 1] == 'i' && str[tamanho - 2] == 'h') ? 1 : 0;
    return contagem + contarCaracter(str, tamanho - 1);
}

int main(){
    int n, i;
    scanf("%d", &n);
    char str[5001];
    for (i = 0; i < n; i++){
        scanf(" %[^\n]", str);
        printf("%d\n", contarCaracter(str, strlen(str)));
    }
}