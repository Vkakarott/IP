#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removeSpaces(char *str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

char isPal(char str[], int i, int j) {
    if (i >= j) return printf("PALINDROMO\n");
    if (str[i] != str[j]) return printf("NAO PALINDROMO\n");
    return isPal(str, i + 1, j - 1);
}

int main(){
    int t, n, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++){
        scanf("%d", &n);
        char *str = (char *)malloc(sizeof(char) * 2000);
        scanf(" %[^\n]", str);
        removeSpaces(str);
        int len = strlen(str);
        isPal(str, 0, len - 1);
        free(str);
    }
    return 0;
}