#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
typedef struct{
  int moradores;
  int consumo;
  double cpp;
}cidade;
 
int compare(const void *a, const void *b) {
    const cidade *cidadeA = (const cidade *)a;
    const cidade *cidadeB = (const cidade *)b;

    if (cidadeA->cpp < cidadeB->cpp) {
        return -1;
    } else if (cidadeA->cpp > cidadeB->cpp) {
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int t;
    int n = 1;
    while (1) {
        int i, j;
        double cm = 0;
        int np = 0;
        scanf("%d", &t);
        if (t == 0) break;
        cidade *imovel = (cidade*)malloc(t * sizeof(cidade));
        if (n > 1) printf("\n \n");
        printf("Cidade# %d:\n", n);
        for (i = 0; i < t; i++){
            scanf("%d %d" , &imovel[i].moradores, &imovel[i].consumo);
            imovel[i].cpp = (double) imovel[i].consumo / imovel[i].moradores;
            cm += imovel[i].consumo;
            np += imovel[i].moradores;
        }
        qsort(imovel, t, sizeof(cidade), compare);
        for (i = 0; i < t; i++) {
            if (i > 0 && fabs(imovel[i].cpp - imovel[i - 1].cpp) < 1e-6) {
                imovel[i].moradores += imovel[i - 1].moradores;
            } else {
                if (i > 0) printf(" ");
                printf("%d-%.0lf", imovel[i].moradores, floor(imovel[i].cpp));
            }
        }
        printf("\nConsumo medio: %.2lf m3.", (double) cm / np);
        free(imovel);
        n++;
    }
}