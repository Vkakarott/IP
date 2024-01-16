// NUMEROS RACIONAIS

#include <stdio.h>

typedef struct{
    int a;
    int b;
} tRacional;

int MDC(int x, int y){
    if (y == 0) return x;
    return MDC(y, x%y);
}

tRacional racional(int a, int b){
    tRacional r;
    r.a = a;
    r.b = b;
    return r;
}

tRacional negativo(tRacional r){
    return racional(-r.a, r.b);
}

tRacional soma(tRacional r1, tRacional r2){
    int mmc = (r1.b * r2.b) / MDC(r1.b, r2.b);
    int a1 = r1.a * (mmc / r1.b);
    int a2 = r2.a * (mmc / r2.b);
    return racional(a1 + a2, mmc);
}

tRacional multiplicacao(tRacional r1, tRacional r2){
    return racional(r1.a * r2.a, r1.b * r2.b);
}

tRacional divisao(tRacional r1, tRacional r2){
    return racional(r1.a * r2.b, r1.b * r2.a);
}

void reduzFracao(tRacional * r){
    int mdc = MDC(r->a, r->b);
    r->a /= mdc;
    r->b /= mdc;
    if (r->b < 0){
        r->a *= -1;
        r->b *= -1;
    }
}

int main(){
    char op;
    tRacional r1, r2;

    while (scanf("%d %d %c %d %d", &r1.a, &r1.b, &op, &r2.a, &r2.b) != EOF) {
        tRacional res;
        switch (op){
            case '+':
                res = soma(r1, r2);
                break;
            case '-':
                res = soma(r1, negativo(r2));
                break;
            case '*':
                res = multiplicacao(r1, r2);
                break;
            case '/':
                res = divisao(r1, r2);
                break;
        }
        reduzFracao(&res);
        printf("%d %d\n", res.a, res.b);
    }
    return 0;
}