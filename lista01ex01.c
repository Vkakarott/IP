//100 kW custa 70% do salario minimo

//calcular valor em reais de cada kW
//valor em reais a ser pago pelo consumo na residencia
//o novo valor a ser pago pela residencia com desconto de 10%

//ler o valor do salario minimo e a quantidade de kW gasta pela residencia

//Custo por kW: R$
//Custo do consumo: R$
//Custo com desconto: R$

#include <stdio.h>

int main() {
    double kWh, gas, con, des, sal;

    //printf("Salario minimo: R$ ");
    scanf("%lf", &sal);
    //printf("Quantidade de kW gastos: ");
    scanf("%lf", &gas);

    kWh = (sal * 0.7) / 100;
    con = gas * kWh;
    des = con * 0.9;

    printf("Custo por kW: R$ %.2lf\nCusto do consumo: R$ %.2lf\nCusto com desconto: R$ %.2lf\n", kWh, con, des);
}
