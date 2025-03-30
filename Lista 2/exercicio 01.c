//Escreva um programa em C que declare e inicialize uma matriz
//3x3 e imprima seus elementos.

#include <stdio.h>

#define LINHA 3
#define COLUNA 3

int main()
{
    int matriz[LINHA][COLUNA];

    //leitura da matriz
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNA; j++)
        {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //impressão da matriz
    printf("MATRIZ\n");
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNA; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
