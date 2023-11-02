#include <stdio.h>
#include <math.h>

int main(){
    int cT; //Casos de teste 
    int x; //Numero as er convertido
    int i; //Inicio do loop for
    int b4; //Numero de base 4 
    int p10; //Potencia de 10

    scanf("%d", &cT);

    for(i = 0; i < cT; i++){
        scanf("%d", &x);

        b4 = 0;
        p10 = 0;

        //Conversão
        while(x != 0){
            b4 += (x % 4) * pow(10, p10);
            x /= 4;
            p10++;
        }

        printf("%d ", b4);
    }
    printf("\n");

    return 0;
}