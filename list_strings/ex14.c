// SENTENCA DANCANTE

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i;
    char str[51];

    // Loop continua até o final do arquivo (EOF)
    while (fgets(str, sizeof(str), stdin) != NULL) {
        int M = 1;
        int length = strlen(str);

        // Remover o caractere de nova linha, se presente
        if (length > 0 && str[length - 1] == '\n') {
            str[length - 1] = '\0';
            length--;
        }

        // Loop através de cada caractere na string de entrada
        for (i = 0; i < length; i++) {
            // Verifica se o caractere é alfabético
            if (isalpha(str[i])) {
                // Se M for 1 (verdadeiro), converte o caractere para maiúsculas
                if (M) {
                    str[i] = toupper(str[i]);
                    M = 0; // Define M como 0 (falso) para a próxima iteração
                } else {
                    // Se M for 0 (falso), converte o caractere para minúsculas
                    str[i] = tolower(str[i]);
                    M = 1; // Define M como 1 (verdadeiro) para a próxima iteração
                }
            }
        }

        // Imprime a string modificada
        printf("%s\n", str);
    }

    return 0; // Indica execução bem-sucedida do programa
}