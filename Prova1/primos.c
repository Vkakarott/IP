#include <stdio.h>

int main(){
    int cT, n, i;

    scanf("%d", &cT);

    for(i=0; i < cT; i++){
        scanf("%d", &n);
        if(n == 1) printf("N\n");
        else if(n == 2) printf("S\n");
        else if(n % 2 == 0) printf("N\n");
        else if(n % 3 == 0) printf("N\n");
        else if(n % 5 == 0) printf("N\n");
        else if(n % 7 == 0) printf("N\n");
        else printf("S\n");
    }
}