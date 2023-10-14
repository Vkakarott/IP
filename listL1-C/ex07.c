// TURMA DE INTRODUCAO A PROGRAMACAO

#include <stdio.h>

int main(){
    int m, f, fn;
    double p1, p2, p3, p4, p5, p6, p7, p8, l1, l2, l3, l4, l5, pf, nf, ch;
    char *arr[] = {
        "APROVADO",
        "REPROVADO POR FREQUENCIA",
        "REPROVADO POR NOTA",
        "REPROVADO POR NOTA E POR FREQUENCIA"
    };

    do {
        scanf("%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d", &m, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &pf, &f);

        if(m<1){
            break;
        }

        nf = 0.7*((p1+p2+p3+p4+p5+p6+p7+p8)/8)+0.15*((l1+l2+l3+l4+l5)/5)+0.15*pf;

        ch = f*100/128;

        if(nf >= 6 && ch >= 75){
            fn = 0;
        } else if (nf >= 6 && ch < 75){
            fn = 1;
        } else if (nf < 6 && ch >= 75){
            fn = 2;
        } else if(nf < 6 && ch < 75){
            fn = 3;
        }

        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: %s\n", m, nf, arr[fn]);
    } while (m>1);
}