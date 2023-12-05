// QUADRADO DE MATRIZ 2x2

#include <stdio.h>

// Função para imprimir uma matriz
void printM(double M[][2]) {
    int i, j;
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            printf("%.3lf ", M[i][j]);
        }
        printf("\n");
    }
}

// Função para calcular o quadrado de uma matriz
void squareM(double A[][2], double R[][2]) {
    int i, j, k;
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            R[i][j] = 0.0;
            for (k = 0; k < 2; ++k) {
                R[i][j] += A[i][k] * A[k][j];
            }
        }
    }
}

int main() {
    double M[2][2];
    double R[2][2];
    int i, j;

    // Leitura da matriz 2x2
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            scanf("%lf", &M[i][j]);
        }
    }

    // Calcula o quadrado da matriz
    squareM(M, R);

    printM(R);

    return 0;
}