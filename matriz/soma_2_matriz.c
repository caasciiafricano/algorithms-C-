#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main()
{
    int matriz1[TAM][TAM], matriz2[TAM][TAM], matriz_soma[TAM][TAM];
    int i, j;
    
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            printf("digite um valor para 1a. matriz: ");
            scanf("%d",&matriz1[i][j]);
        }
    }
    
    puts("-----------------------------------------------");
    
     for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            printf("digite um valor para 2a. matriz: ");
            scanf("%d",&matriz2[i][j]);
        }
    }
   
   
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            matriz_soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    
    puts("-----------------------------------------------");
    puts("SOMA DAS MATRIZES ");
    puts("-----------------------------------------------");
     for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            printf("%d ",matriz_soma[i][j]);
        }
        putchar('\n');
    }
    
    
    return 0;
}
