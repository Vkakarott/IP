// DESENHA QUADRADOS

#include <stdio.h>

#define MAX_SIZE 200

// Função para desenhar o quadrado na matriz
void drawSquare(int matrix[MAX_SIZE][MAX_SIZE], int x, int y, int radius, int style, int color) {
    int i, j;

    // Verificar se o quadrado não ultrapassa as dimensões da imagem
    if (x - radius < 0 || x + radius >= MAX_SIZE || y - radius < 0 || y + radius >= MAX_SIZE) {
        return;
    }

    // Desenhar borda
    if (style == 1) {
        for (i = x - radius; i <= x + radius; i++) {
            matrix[y - radius][i] = color;
            matrix[y + radius][i] = color;
        }
        for (j = y - radius; j <= y + radius; j++) {
            matrix[j][x - radius] = color;
            matrix[j][x + radius] = color;
        }
    }
    // Desenhar preenchido
    else if (style == 2) {
        for (i = x - radius + 1; i < x + radius; i++) {
            for (j = y - radius + 1; j < y + radius; j++) {
                matrix[j][i] = color;
            }
        }
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE] = {0};
    int width, height, bgColor, x, y, radius, style, color;

    // Leitura do tamanho da imagem e cor de fundo
    scanf("%d", &width);
    scanf("%d", &height);
    scanf("%d", &bgColor);

    // Inicialização da matriz com a cor de fundo
    for (int i = 0; i < MAX_SIZE; i++) {
        for (int j = 0; j < MAX_SIZE; j++) {
            matrix[i][j] = bgColor;
        }
    }

    // Leitura e desenho dos quadrados
    do {
        scanf("%d %d %d %d %d", &x, &y, &radius, &style, &color);

        if (x != -1 && y != -1) {
            drawSquare(matrix, x, y, radius, style, color);
        }
    } while (x != -1 && y != -1);

    // Impressão da imagem PGM
    printf("P2\n");
    printf("%d %d\n", width, height);
    printf("255\n");

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}