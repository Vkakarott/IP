#include <stdio.h>

int main(){
    int oF, p, q, r;
    char op[1] = {};

    scanf("%d", &oF);

    scanf("%d %s %d", &p, op, &q);

    if(op[0] == '+') r = p + q;
    else if(op[0] == '*') r = p * q;

    if(r > oF) printf("OVERFLOW\n");
    else printf("OK\n");
}