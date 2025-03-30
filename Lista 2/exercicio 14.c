//Escreva um programa em C que copie os elementos de uma matriz
//3x3 para outra matriz.

#include <stdio.h>

#define TAMANHO 3

//função para imprimir a matriz
void imprimir_matriz(int matriz[TAMANHO][TAMANHO])
{
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }
}

int main()
{   

    int matriz[TAMANHO][TAMANHO] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matriz_copia[TAMANHO][TAMANHO];

    //copiando os elementos de uma matriz para outra
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            matriz_copia[i][j] = matriz[i][j];
        }
    }

    //imprimindo a matriz
    printf("MATRIZ\n");
    imprimir_matriz(matriz);

    printf("MATRIZ_COPIA\n");
    //imprimindo a matriz_copia
    imprimir_matriz(matriz_copia);

    return 0;
}