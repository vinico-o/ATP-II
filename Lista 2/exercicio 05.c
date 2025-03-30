//Escreva um programa em C que transponha uma matriz 3x2 para
//uma matriz 2x3.

#include <stdio.h>

#define LINHA 3
#define COLUNA 2

int main()
{
    int matriz[LINHA][COLUNA], matriz_transposta[COLUNA][LINHA];

    //leitura da matriz
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNA; j++)
        {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //impressao da matriz
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNA; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }



    //transpondo a matriz (trocando linha por coluna)
    for(int i = 0; i < COLUNA; i++)
    {
        for(int j = 0; j < LINHA; j++)
        {
            matriz_transposta[i][j] = matriz[j][i];
        }
    }

    //impressão da matriz transposta
    printf("MATRIZ TRANSPOSTA");
    for(int i = 0; i < COLUNA; i++)
    {
        for(int j = 0; j < LINHA; j++)
        {
            printf("%d ", matriz_transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
