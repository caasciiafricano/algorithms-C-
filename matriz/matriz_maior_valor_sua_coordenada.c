#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main()
{
    int matriz[TAM][TAM];
    int i, j, maior, linha=0, coluna=0;
    
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            printf("digite valores para matriz: ");
            scanf("%d",&matriz[i][j]);
        }
    }
    
    maior = matriz[0][0];
    
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            if(maior < matriz[i][j]){
                maior = matriz[i][j];
                linha = i; coluna = j;
            }
        }
    }
    
    printf("O maior valor: %d - esta na coordenada (%d,%d)",maior ,linha ,coluna);
    
    
    return 0;
}
