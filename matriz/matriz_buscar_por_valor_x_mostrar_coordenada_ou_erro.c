#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main()
{
    int matriz[TAM][TAM];
    int i, j, x, linha=0, coluna=0;
    
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            printf("digite valores para matriz: ");
            scanf("%d",&matriz[i][j]);
        }
    }
    
    puts("-------------------------------------");
    printf("buscar pelo valor: ");
    scanf("%d",&x);
    
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            if(matriz[i][j] == x){
                linha = i; coluna = j;
                break;
            }
        }
    }
    
    if(linha == 0 && coluna ==0){
        printf("valor %d, nao existe na matriz.",x);
    }else{
        printf("valor %d encontrado na coordenada(%d,%d)",x ,linha ,coluna);
    }
    
    return 0;
}
