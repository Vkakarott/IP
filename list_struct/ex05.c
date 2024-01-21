#include <stdio.h>

typedef struct{
    int codigo;
    double valor;
    char name[100];
} Curso;

typedef struct{
    char name[100];
    int codigo;
    int creditos;
} Aluno;

int main(){
    int c, m, i, j;
    scanf("%d", &c);
    Curso cursos[c];
    for (i = 0; i < c; i++){
        scanf("%d", &cursos[i].codigo);
        scanf("%lf", &cursos[i]. valor);
        scanf(" %[^\n]", &cursos[i].name);
    }
    scanf("%d", &m);
    Aluno alunos[m];
    for (i = 0; i < m; i++){
        scanf(" %[^\n]", &alunos[i].name);
        scanf("%d", &alunos[i].codigo);
        scanf("%d", &alunos[i].creditos);

        double valor;
        for (j = 0; j < c; j++){
            if (alunos[i].codigo == cursos[j].codigo){
                valor = cursos[j].valor;
                break;
            }
        }
        double mensalidade = alunos[i].creditos * valor;
        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito %.2lf Mensalidade: %.2lf\n", alunos[i].name, cursos[j].name, alunos[i].creditos, valor, mensalidade);
    }
    return 0;
}