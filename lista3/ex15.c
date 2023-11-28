    #include <stdio.h>
    #include <string.h>
     
    #include <stdlib.h>
     
    int main(){
     
        int n;
        char caracter_atual;
        scanf("%d", &n);
     
        while(n--){
            char str[300];
            int letras[26];
            int i;
            scanf("\n%[^\n]", str);
            
            for(i=0;i<26;i++){
                letras[i]=0;
            }
     
            
            for(i=0;i<strlen(str);i++){
               caracter_atual = str[i]; 
               if(caracter_atual<'A' && caracter_atual>'Z' || caracter_atual<'a'&& caracter_atual>'z') continue;
               if(caracter_atual>='A'&&caracter_atual<='Z') letras[caracter_atual - 'A'] += 1;
               else letras[caracter_atual - 'a'] += 1;
                
            }
     
            int index_maior=0;
     
            for(i=0;i<26;i++){
                if(letras[index_maior]<letras[i]) index_maior=i;
            }
     
            int maior_frequencia = letras[index_maior];
            for(i=0;i<26;i++){
            if(letras[i] == maior_frequencia){
            printf("%c",i + 'a');}
            }
            printf("\n");
        }
     
        return 0;
    }

×
