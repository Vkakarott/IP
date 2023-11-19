// CRIPTOGRAFIA

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1001];
    int cT, i;

    scanf("%d", &cT);

    while (cT--) {
        scanf(" %[^\n]", str); 
        int len = strlen(str); 

        for (i = 0; str[i] != '\0'; i++) {
            if (isalpha(str[i])) {
                str[i] = (str[i] + 3) % 128;
            }
        }
        for (i = len - 1; i >= 0; i--) {
            if (len % 2 == 0 && i < len / 2) str[i] = str[i] - 1; 
            else if (len % 2 != 0 && i <= len / 2) str[i] = str[i] - 1;
            printf("%c", str[i]);
        }
        printf("\n");
    }

    return 0;
}