// LOCADORA DE CHARRETE
 
#include <stdio.h>
 
int main(){
    int horas;
    double valor;
 
    scanf("%d", &horas);
 
    valor = ((horas/3)*10) + ((horas%3)*5);
 
    printf("O VALOR A PAGAR E = %.2lf\n", valor);
}