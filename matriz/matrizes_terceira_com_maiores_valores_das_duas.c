#include <stdio.h>
#include <stdlib.h>

#define TAM 4

int main()
{
    int matriz1[TAM][TAM],matriz2[TAM][TAM],matriz3[TAM][TAM];
    int i, j;
    
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            printf("digite valores para 1a. matriz: ");
            scanf("%d",&matriz1[i][j]);
        }
    }
    
    puts("-------------------------------------------------------");
    
     for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            printf("digite valores para 2a. matriz: ");
            scanf("%d",&matriz2[i][j]);
        }
    }
    
     for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            if(matriz1[i][j] > matriz2[i][j])
                matriz3[i][j] = matriz1[i][j];
            else
                matriz3[i][j] = matriz2[i][j];
        }
    }
    
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            printf("%d ",matriz3[i][j]);
        }
        putchar('\n');
    }
    
    
    return 0;
}
