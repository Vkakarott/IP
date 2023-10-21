// TRANSCRICAO DE DATAS
 
#include <stdio.h>
 
int main(){
    int d, m, a;
    char *arr[] = {
        "null",
        "janeiro",
        "fevereiro",
        "marco",
        "abril",
        "maio",
        "junho",
        "julho",
        "agosto",
        "setembro",
        "outubro",
        "novembro",
        "dezembro"
    };
 
    scanf("%2d%2d%d", &d, &m, &a);
 
    if (d < 1 || d >31 || m < 1 || m > 12 || a == 0){
        printf("Data invalida!\n");
    } else if (m == 2 && d > 28) {
        printf("Data invalida!\n");
    } else if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30){
        printf("Data invalida!\n");
    } else {
        printf("%d de %s de %d\n", d, arr[m], a);
    }
}