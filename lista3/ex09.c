// SEQUENCIA ESPELHO

#include <stdio.h>
#include <string.h>

int main(){
    char str[12222];
    int cT, i;
    int B, E;
    scanf("%d", &cT);

    while (cT--) {
        scanf("%d", &B);
        scanf("%d", &E); 
        
        int index = 0;

        for (i = B; i <= E; i++) {
            // Use snprintf para evitar estouro de buffer
            index += snprintf(str + index, sizeof(str) - index, "%d", i);
        }

        // Adicione um caractere nulo no final
        str[index] = '\0';

        printf("%s", str);
        for (i = strlen(str) - 1; i >= 0; i--) {
            printf("%c", str[i]);
        }
        printf("\n");
    }

    return 0;
}