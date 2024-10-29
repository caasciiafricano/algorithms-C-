#include <stdio.h>
#include <stdlib.h>

#define TAM 4

int main()
{
    int matriz[TAM][TAM];
    int i, j, quant=0;
    
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            printf("digite um valor para matriz: ");
            scanf("%d",&matriz[i][j]);
        }
    }
    
    // contando quantos números maiores do que 10
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
           if(matriz[i][j] > 10)
                quant = quant + 1;
        }
    }
    
    printf("Existem: %d número maior que 10",quant);
    
    return 0;
}
