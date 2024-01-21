#include <stdio.h>

char prefix(const char *cadeia, int len) {
    if (len == 0) return 0;
    int i;
    for (i = 0; i < len; i++) printf("%c", cadeia[i]);
    printf("\n");
    return prefix(cadeia, len - 1);
}

int main() {
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++){
        char cadeia[1000];
        scanf(" %[^\n]", cadeia);
        printf("Caso de teste %d\n", i + 1);
        prefix(cadeia, strlen(cadeia));
    }
    return 0;
}