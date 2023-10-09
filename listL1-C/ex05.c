// SOMA DE PROGRESSAO ARITIMETICA

#include <stdio.h>

int main(){
    int n;
    double a1, r, s;

    scanf("%lf %lf %d", &a1, &r, &n);

    s = (n/2.0)*(2*a1+(n-1)*r);

    printf("%.lf\n", s);
}