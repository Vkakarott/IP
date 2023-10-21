// CONTA DE AGUA
 
#include <stdio.h>
 
int main(){
    int conta;
    double consumo, valor;
    char consumidor;
 
    scanf("%d %lf", &conta, &consumo);
    scanf(" %c", &consumidor);
 
    if(consumidor == 'R'){
        valor = 5 + (0.05 * consumo);
    }else if(consumidor == 'C'){
        valor = 500;
        if(consumo > 80){
            valor = valor + ((consumo-80)*0.25);
        }
    }else if(consumidor == 'I'){
        valor = 800;
        if(consumo > 100){
            valor = valor + ((consumo-100)*0.04);
        }
    }
 
    printf("CONTA = %d\nVALOR DA CONTA = %.2lf\n", conta, valor);
}