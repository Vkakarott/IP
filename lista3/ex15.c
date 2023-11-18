// FREQUENCIA DE LETRAS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Função de comparação para qsort
int compare(const void *a, const void *b) {
    return (*(char*)a - *(char*)b);
}

int main() {
    int cT, i;
    char str[201];
    char str2[201];
    int ocorrencias[26] = {0};

    scanf("%d", &cT);

    while(cT--){
        scanf(" %[^\n]", str);
        int tamanho = strlen(str);

        int j = 0;
        for (i = 0; i < tamanho; i++){
            if (isalpha(str[i])){
                str2[j] = tolower(str[i]);
                j++;
            }
        }

        qsort(str2, j, sizeof(char), compare);

        memset(ocorrencias, 0, sizeof(ocorrencias));

        for (i = 0; i < tamanho; i++) {
            ocorrencias[str2[i] - 'a']++;
        }

        int maxOcorrencias = 0;
        for (i = 0; i < 26; i++) {
            if (ocorrencias[i] > maxOcorrencias) {
                maxOcorrencias = ocorrencias[i];
        }
        }

        for (i = 0; i < 26; i++) {
            if (ocorrencias[i] == maxOcorrencias) {
                printf("%c", 'a' + i);
            }
        }

        printf("\n");
    }
    return 0;
}