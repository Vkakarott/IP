// LE STRINGS

#include <stdio.h>
#include <string.h>
#define N 128+1

int le_string(char *str, int n) {
    int i;
    char c;

    for (i = 0; i < n - 1; i++) {
        int scanfResult = scanf(" %c", &c);
        if (scanfResult == EOF || c == '\n' || c == '\r') {
            break;
        }
        str[i] = c;
    }
    str[i] = '\0';

    while ((c = getchar()) != '\n' && c != EOF);

    return i;
}

void print_codes(char *str) {
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        printf("%d ", str[i]);
    }
    printf("\n");
}

int main() {
    char str[N], s[N];
    char c;
    int i;

    scanf("%c", &c);
    le_string(str, 3);
    print_codes(str);
    printf("caracter:%c, str:%s\n", c, str);

    scanf("%c", &c);
    le_string(str, 5);
    print_codes(str);
    printf("caracter:%c, str:%s\n", c, str);

    scanf("%c", &c);
    le_string(str, 5);
    print_codes(str);
    printf("caracter:%c, str:%s\n", c, str);

    scanf("%d", &i);
    le_string(str, 3);
    print_codes(str);
    printf("inteiro:%d, str:%s\n", i, str);

    scanf("%d", &i);
    le_string(str, 15);
    print_codes(str);
    printf("inteiro:%d, str:%s\n", i, str);

    scanf("%s", s);
    le_string(str, 100);
    print_codes(str);
    printf("string:%s, str:%s\n", s, str);

    scanf("%s", s);
    le_string(str, 100);
    print_codes(str);
    printf("string:%s, str:%s\n", s, str);

    return 0;
}