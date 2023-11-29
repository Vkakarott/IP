// UM_DOIS_TRES
 
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main(){
    int Ct;
    char F[100000];
 
    scanf("%d", &Ct);
    while(Ct--){
        scanf("%s", F);
        if (strlen(F) == 5){
            printf("3\n");
        } else {
            if ((F[0] == 'o') && (F[1] == 'n' || F[2] == 'e')) printf("1\n");
            else if ((F[1] == 'n') && (F[0] == 'o' || F[2] == 'e')) printf("1\n");
            if ((F[0] == 't') && (F[1] == 'w' || F[2] == 'o')) printf("2\n");
            else if ((F[1] == 'w') && (F[0] == 't' || F[2] == 'o')) printf("2\n");
        }    
    }
}