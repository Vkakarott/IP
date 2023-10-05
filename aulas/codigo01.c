//importação de bibliotecas
#include <stdio.h>
//Definir constante
#define PI 2;

//Declaração do meu bloco principal
int main(){
    //Declaração de variaveis
    int n1, n2, s, m, dn1, dn2;
    printf("Digite um numero: ");
    //Entrada de valores para a variavel n1
    scanf("%d", &n1); //& é nescessario para indicar o endereço da variavel a ser alterada
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    s = n1 + n2;
    m = n1 * n2;
    dn1 = n1 * PI;
    dn2 = n2 * PI;
    printf("A soma é: %d", s);
    printf("\nA multiplicação é: %d \n", m);
    printf("O dobro de %d e %d, são %d, %d respectivamente", n1, n2, dn1, dn2);
}

/*
#include -> importa bibliotecas
#define -> define constantes
<stdio.h> -> biblioteca de input e output
%d , %i -> indica que printf() deve colocar um inteiro na tela
%c -> caracteres
%f -> float
printf -> mostrar na tela
scanf -> comando que recebe uma entrada do teclado

aspas simples não funciona
*/
