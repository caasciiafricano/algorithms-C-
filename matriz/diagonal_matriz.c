#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main()
{
    int matriz[TAM][TAM], v[TAM];
    int i, j;
    
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            printf("digite um valor: ");
            scanf("%d",&matriz[i][j]);
        }
    }
    
    // pegar os valoros da diagonal principal, passando para um vetor
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            if(i==j)
                v[j] = matriz[i][j];
            continue;
        }
    }
    
    // imprimindo valores do vetor
    for(i=0;i<TAM; i++){
        printf("%d ",v[i]);
    }
    
    
    return 0;
}
