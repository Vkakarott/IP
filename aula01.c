//importação de bibliotecas
#include <stdio.h>

//Declaração do meu bloco principal
int main(){
    //Declaração de variaveis
    int n1, n2, s, m;
    printf("Digite um numero: ");
    //Entrada de valores para a variavel n1
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    s = n1 + n2;
    m = n1 * n2;
    printf("A soma é: %d", s);
    printf("\nA multiplicação é: %d \n", m);
}

/*
#include -> importa bibliotecas
<stdio.h> -> biblioteca de input e output
%d -> indica que printf() deve colocar um inteiro na tela
printf -> mostrar na tela
scanf -> comando que recebe uma entrada do teclado

aspas simples não funciona
*/
