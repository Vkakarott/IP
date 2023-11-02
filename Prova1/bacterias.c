#include <stdio.h>
#include <math.h>

int main(){
    int cT; //Casos de teste
    int i; //inicio do for
    int d, c; //Divisao por noite e noites que dividirá (respectivamente)
    int escolha;
    double mC = 0, atual; //Maior colonia e colonia atual

    scanf("%d", &cT);
    
    for(i = 0; i < cT; i++){
        scanf("%d %d", &d, &c);
        atual = c * log(d);
        if (atual > mC){ //Se a colonia atual for maior que a melhor colonia
            mC = atual;
            escolha = i;
        }
    }
    printf("%d\n", escolha);
    return 0;
}