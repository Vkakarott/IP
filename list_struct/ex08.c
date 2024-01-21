#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} dataNasc;

typedef struct{
    int matricula;
    dataNasc dataNasc;
    char nome[200];
} aluno;

int comparaDataNasc(const void *a, const void *b){
    const aluno *alunoA = (const aluno *)a;
    const aluno *alunoB = (const aluno *)b;

    if (alunoA->dataNasc.ano > alunoB->dataNasc.ano) {
        return -1;
    } else if (alunoA->dataNasc.ano < alunoB->dataNasc.ano) {
        return 1;
    } else {
        if (alunoA->dataNasc.mes > alunoB->dataNasc.mes) {
            return -1;
        } else if (alunoA->dataNasc.mes < alunoB->dataNasc.mes) {
            return 1;
        } else {
            if (alunoA->dataNasc.dia > alunoB->dataNasc.dia) {
                return -1;
            } else if (alunoA->dataNasc.dia < alunoB->dataNasc.dia) {
                return 1;
            } else {
                return 0;
            }
        }
    }
}

int main(){
    int n, i;
    scanf("%d", &n);
    aluno alunos[n];
    for (i = 0; i < n; i++){
        scanf("%d %d %d %d %[^\n]s", &alunos[i].matricula, &alunos[i].dataNasc.dia, &alunos[i].dataNasc.mes, &alunos[i].dataNasc.ano, alunos[i].nome);
    }
    qsort(alunos, n, sizeof(aluno), comparaDataNasc);
    for (i = 0; i < n; i++){
        printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", alunos[i].matricula, alunos[i].nome, alunos[i].dataNasc.dia, alunos[i].dataNasc.mes, alunos[i].dataNasc.ano);
    }
    return 0;
}