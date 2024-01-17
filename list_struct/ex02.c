#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct{
  char name[50];
  double preco;
} produtos;
 
int main(){
  int t;
 
  scanf("%d", &t);
  while (t--){
    int m, i, j, p;
    double valor = 0.0;
    scanf("%d%*c", &m);
    produtos feira[m];
    for(i = 0; i < m; i++){
      scanf(" %s%*c %lf%*c", feira[i].name, &feira[i].preco);
    }
    scanf("%d%*c", &p);
    for(i = 0; i < p; i++){
      char np[50];
      int quant = 0;
      scanf(" %s%*c %d%*c", np, &quant);
      for(j = 0; j < m; j++){
        if(strcmp(np,feira[j].name) == 0){
          valor += (feira[j].preco * quant);
        }
      }
    }
    printf("R$ %.2lf\n", valor);
  }
}