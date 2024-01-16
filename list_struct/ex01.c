// FRACOES EQUIVALENTES

#include <stdio.h>

int main(){
    struct fracao{
        int numerador;
        char barra;
        int denominador;
    };
    int t, n, i, j;
    struct fracao fracoes[100];
    scanf("%d", &t);
    int f = 1;
    while (t--){
        scanf("%d", &n);
        for (i = 0; i < n; i++){
            scanf("%d%c%d", &fracoes[i].numerador, &fracoes[i].barra, &fracoes[i].denominador);
        }
        int yup = 0;
        printf("Caso de teste %d\n", f);
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
        f++;
    }
}