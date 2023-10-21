// PROCURA POR NUMERO AMIGO

#include <stdio.h>

int somaDivisores(int num) {
    int soma = 1;
    int i;
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int n;
    int count = 0;
    int num1, num2;
    int i;
    
    scanf("%d", &n);

    for (i = 2; count < n; i++) {
        num1 = i;
        num2 = somaDivisores(num1);

        if (num2 > num1 && somaDivisores(num2) == num1) {
            printf("(%d,%d)\n", num1, num2);
            count++;
        }
    }

    return 0;
}