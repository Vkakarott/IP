//lib input e outpt
#include <stdio.h>

int main() {
	//Declarar variaveis
    int i = 1;
	float notas, media, peso;
    float somaPesos = 0;

    //loop de repetição
    for(i = 1; i < 5; i++){
        printf("nota %d: ", i);
	    scanf("%f", &notas);
        printf("Peso da nota %d: ", i);
        scanf("%f", &peso);
        media += notas * peso;
        somaPesos += peso;
    }
	
    media /= somaPesos;

	printf("A media entre as notas é %.2f\n", media);
}
