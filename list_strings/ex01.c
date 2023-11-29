// COMBINADOR
 
#include <stdio.h>
#include <string.h>
 
int main(){
    int Ct, i;
    char str[51];
    char str1[51];
 
    scanf("%d", &Ct);
    while(Ct--){
        scanf("%s", str);
        scanf("%s", str1);
        size_t tm = strlen(str);
        size_t tm1 = strlen(str1);
        for (i = 0; i < tm; i++){
            printf("%c", str[i]);
            if(i < tm1){
                printf("%c", str1[i]);
            }
        }
        if(tm1 > tm){
            for (i = tm; i < tm1; i++){
                printf("%c", str1[i]);
            }
        }
        printf("\n");
    }
}