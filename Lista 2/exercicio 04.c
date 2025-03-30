//Escreva um programa em C que multiplique uma matriz 2x3 por
//uma matriz 3x2 e armazene o resultado em uma matriz 2x2.

#include <stdio.h>

#define LINHA 2
#define COLUNA 3
#define TAMANHO 2

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
    int matriz1[LINHA][COLUNA] = {{1, 1, 1}, {2, 2, 2}};
    int matriz2[COLUNA][LINHA] = {{1, 1}, {1, 1}, {1, 1}};
    int matriz3[TAMANHO][TAMANHO] = {{0, 0}, {0, 0}};


    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {   
            for(int k = 0; k < 3; k++)
            {
                matriz3[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    imprimir_matriz(matriz3);

    return 0;
}
