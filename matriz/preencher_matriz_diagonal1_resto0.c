#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main()
{
    int matriz[TAM][TAM];
    int i, j, quant=0;
    
    // preencher a matriz (diagonal com valor 1) e o resto com o valor 0
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            if(i==j)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
    
    // imprimir a matriz após o preenchimento
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
           printf("%d ",matriz[i][j]);
        }
        putchar('\n');
    }
    
    return 0;
}
