#include <stdio.h>
#include <stdlib.h>

#define TAM 4

int main()
{
    int matriz[TAM][TAM];
    int i, j, quant=0;
    
   
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            matriz[i][j] = i * j;
        }
    }
    
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            printf("%d ",matriz[i][j]);
        }
        putchar('\n');
    }
    
    return 0;
}
