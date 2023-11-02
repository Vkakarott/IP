#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main(){
    int cT, i;
    double R, r, a, b, c, B, H, p, area;
    char t[5] = {};

    scanf("%d", &cT);

    for (i= 0; i < cT; i++){
        scanf(" %c", &t[i]);

        if (t[i] == 'C'){
            scanf("%lf", &R);
            area = PI * R * R;
        } else if (t[i] == 'E'){
            scanf("%lf %lf", &r, &R);
            area = PI * r * R;
        } else if (t[i] == 'T'){
            scanf("%lf %lf %lf", &a, &b, &c);
            p = (a + b + c)/2;
            area = sqrt(p*(p-a)*(p-b)*(p-c));
        } else if (t[i] == 'Z'){
            scanf("%lf %lf %lf", &B, &b, &H);
            area = (B + b)* H / 2;
        }
        printf("%.4lf\n", area);    
    }
    return 0;
}