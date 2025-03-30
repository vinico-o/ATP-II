//Escreva um programa em C que multiplique uma matriz 3x3 por
//sua transposta.

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

    printf("\n");
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz_transposta[TAMANHO][TAMANHO];
    int matriz_resultado[TAMANHO][TAMANHO] = {0};

    //transpõe a matriz original
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            matriz_transposta[i][j] = matriz[j][i];
        }
    }

    //multiplicação das matrizes
    for(int i = 0; i < TAMANHO; i++)//percorre linhas
    {
        for(int j = 0; j < TAMANHO; j++)//percorre colunas
        {
            for(int k = 0; k < TAMANHO; k++)//localiza os elementos a serem multiplicados
            {
                matriz_resultado[i][j] += matriz[i][k] * matriz_transposta[k][j];
            }
        }
    }

    printf("MATRIZ ORIGINAL\n");
    imprimir_matriz(matriz);
    printf("MATRIZ TRANSPOSTA\n");
    imprimir_matriz(matriz_transposta);
    printf("MATRIZ MULTIPLICADA\n");
    imprimir_matriz(matriz_resultado);

    return 0;
}