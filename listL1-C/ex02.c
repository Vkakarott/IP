// CONVERSAO DE TEMPERATURA

#include <stdio.h>

int main(){
    int casos, i;
    double celsius, fahr;

    scanf("%d", &casos);
    for(i = 0; i < casos; i++){
        scanf("%lf", &fahr);
        celsius = (5*(fahr-32))/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", fahr, celsius);
    }
}