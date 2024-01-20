#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct fracao{
    int numerador;
    char barra;
    int denominador;
} Fracao;

int main(){
    int t, i, j;
    scanf("%d", &t);
    getchar();
    int loop = 0;

    while (t--) {
        char input[100];
        loop++;
        Fracao fracoes[100];
        fgets(input, sizeof(input), stdin);
        int len = strlen(input);
        int n = 0;
        for (i = 0; i < len; i++) {
            if (input[i] == '/') {
                int numStart = i - 1;
                while (numStart >= 0 && isdigit(input[numStart])) {
                    numStart--;
                }
                fracoes[n].numerador = atoi(&input[numStart + 1]);

                int denStart = i + 1;
                while (denStart < len && isdigit(input[denStart])) {
                    denStart++;
                }
                fracoes[n].denominador = atoi(&input[i + 1]);

                fracoes[n].barra = input[i];
                n++;
            }
        }
        int yup = 0;
        printf("Caso de teste %d\n", loop);
        for (i = 0; i < n; i++){
            double fr1 = (double) fracoes[i].numerador / fracoes[i].denominador;
            for (j = i+1; j < n; j++){
                double fr2 = (double) fracoes[j].numerador / fracoes[j].denominador;
                if (fr1 == fr2){
                    printf("%d/%d equivalente a %d/%d\n", fracoes[i].numerador, fracoes[i].denominador, fracoes[j].numerador, fracoes[j].denominador);
                    yup = 1;
                }
            }
        }
        if (!yup){
            printf("Nao ha fracoes equivalentes na sequencia\n");
        }
    }
    return 0;
}