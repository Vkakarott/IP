// POTENCIA DE MATRIZES

#include <stdio.h>

// Função para imprimir uma matriz
void printM(double M[][100], int N) {
    int i, j;
    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            printf("%.3lf ", M[i][j]);
        }
        printf("\n");
    }
}

// Função para multiplicar duas matrizes
void multiplyMatrices(double A[][100], double B[][100], double R[][100], int size) {
    int i, j, k;
    for (i = 0; i < size; ++i) {
        for (j = 0; j < size; ++j) {
            R[i][j] = 0;
            for (k = 0; k < size; ++k) {
                R[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Função para calcular a potência de uma matriz
void powMatriz(double M[][100], double R[][100], int size, int k) {
    int i, j, n;

    double temp[100][100];

    for (i = 0; i < size; ++i) {
        for (j = 0; j < size; ++j) {
            if (i == j) {
                R[i][j] = 1.0;
            } else {
                R[i][j] = 0.0;
            }
        }
    }

    // Multiplica a matriz M pela matriz resultante R k vezes
    for (n = 0; n < k; ++n) {
        multiplyMatrices(M, R, temp, size);
        // Atualiza a matriz resultante
        for (i = 0; i < size; ++i) {
            for (j = 0; j < size; ++j) {
                R[i][j] = temp[i][j];
            }
        }
    }
}

int main() {
    int N, k;
    int i, j;

    scanf("%d %d", &N, &k);

    double M[N][N];
    double R[N][N];

    // Leitura da matriz
    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            scanf("%lf", &M[i][j]);
        }
    }

    // Calcula a potencia da matriz
    powMatriz(M, R, N, k);

    // Imprime a matriz
    printM(R, N);

    return 0;
}