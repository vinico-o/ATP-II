//Escreva um programa em C que realize a rota ̧c ̃ao de uma matriz
//quadrada 4x4 no sentido hor ́ario.

#include <stdio.h>

//definindo o tamanho da matriz (4x4)
#define TAMANHO 4

int main()
{
    //declaração das variáveis
    int matriz[TAMANHO][TAMANHO] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int matriz_rotacionada[TAMANHO][TAMANHO];

    //impressão da matriz digitada
    printf("MATRIZ\n");
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //rotacionando a matriz
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            matriz_rotacionada[i][j] = matriz[TAMANHO - j - 1][i];
        }
    }

    //impressão da matriz rotacionada
    printf("MATRIZ ROTACIONADA\n");
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            printf("%d ", matriz_rotacionada[i][j]);
        }
        printf("\n");
    }

    return 0;
}