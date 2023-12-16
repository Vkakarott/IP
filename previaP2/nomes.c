#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void invert(char str[]){
    int tam = strlen(str);
    int i, j;
 
    for(i = 0, j = tam - 1; i < j; i++, j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
 
int compare(const void *a, const void *b){
    return strcmp(*(const char **)a, *(const char **)b);
}
 
void printVet(char **str, int N){
    int i;
    for(i = 0; i < N; i++){
        printf("%s\n", str[i]);
    }
}
int main(){
    int N, M;
    int i;
    
    scanf("%d %d", &N, &M);
    char **nomes = (char **)malloc(N * sizeof(char *));
    for(i = 0; i < N; i++){
        nomes[i] = (char *)malloc((M + 1) * sizeof(char));
        scanf(" %[^\n]", nomes[i]);
        invert(nomes[i]);
    }
    qsort(nomes, N, sizeof(nomes[0]), compare);
    printVet(nomes, N);
    return 0;
}