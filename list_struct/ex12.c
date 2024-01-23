#include <stdio.h>
#include <math.h>
 
struct cidade
{
    int moradores;
    int consumo;
 
};
 
 
 
int main(){
    int n, i, j, num = 0;
    while (1)
    {
        scanf("%d", &n);
        if (!n) break;
        num++;
        double media = 0;
        int totalcid = 0, maior = 0, primeiro = 1;
        struct cidade cid[n];
        for (i = 0; i < n; i++) {
            scanf("%d %d", &cid[i].moradores, &cid[i].consumo);
            media += cid[i].consumo;
            totalcid += cid[i].moradores;
            cid[i].consumo /= cid[i].moradores;
            if (maior < cid[i].consumo) maior = cid[i].consumo;
        }
 
        printf("Cidade# %d:\n", num);
        for (j = 0; j <= maior; j++) {
            int soma = 0;
            for (i = 0; i < n; i++) {
                if (cid[i].consumo == j) soma+= cid[i].moradores;
            }
            if (soma != 0 && primeiro == 1) {
                printf("%d-%d", soma, j);
                primeiro = 0;
            } else if (soma != 0 && primeiro == 0) {
                printf(" %d-%d", soma, j);
            }
            
        }
        printf("\nConsumo medio:  %.2lf m3.\n", (double)media/totalcid);
 
    }
    
 
    
}
