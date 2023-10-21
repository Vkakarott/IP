// APROVADO E REPROVADO

#include <stdio.h>
int main(){
    double n1, n2, n3, ma;
    int s = 0;
    char *arr [] = {
        "APROVADO",
        "REPROVADO"
    };

    scanf("%lf %lf %lf", &n1, &n2, &n3);

    ma = (n1 + n2 + n3)/3;

    if (ma < 6) s = 1;

    printf("MEDIA = %.2lf\n%s", ma, arr[s]);
}