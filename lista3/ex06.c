#include <stdio.h>
#include <string.h>

int main(){
char str[201];
int i;

while(scanf("%s", str) != EOF){
Int j = strlen(str);
int palindromo = 1;
for(i = 0; i < (j/2); i++){
if(str[i] != Str[j-i]{
palindromo = O;
}
}
if(palindromo) printf("sim\n");
else printf("não \n");
}
}