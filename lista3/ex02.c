// LED
 
#include <stdio.h>
#include <string.h>
 
int main(){
    int Ct, i;
    char N[1000];
 
    scanf("%d", &Ct);
    while(Ct--){
        scanf("%s", N);
        int leds = 0;
        for(i = 0; i < strlen(N); i++){
            if(N[i] == '1'){
                leds += 2;
            } else if (N[i] == '2'|| N[i] == '3' || N[i] == '5'){
                leds += 5;
            } else if(N[i] == '4'){
                leds += 4;
            } else if(N[i] == '6' || N[i] == '9' || N[i] == '0'){
                leds += 6;
            } else if(N[i] == '7'){
                leds += 3;
            } else if(N[i] == '8'){
                leds += 7;
            }
        }
        printf("%d leds\n", leds);
    }
}