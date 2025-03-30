//Escreva um programa em C que preencha uma matriz 5x5 com
//n ́umeros aleat ́orios e depois ordene os elementos de cada coluna.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//dimensoes da matriz
#define TAMANHO 5
//numero maximo gerado
#define MAX 9

void ordenar_coluna(int matriz[TAMANHO][TAMANHO])
{
    int temp;
    
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO - 1; j++)
        {
            for(int k = 0; k < TAMANHO - j - 1; k++)
            {
                if(matriz[k][i] > matriz[k + 1][i])
                {
                    temp = matriz[k][i];
                    matriz[k][i] = matriz[k + 1][i];
                    matriz[k + 1][i] = temp;
                }
            }
        }
    }
}

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
    int matriz[TAMANHO][TAMANHO];

    srand(time(NULL));//semente de geração com base no tempo atual

    for(int i = 0; i < TAMANHO; i++)//percorre linhas
    {
        for(int j = 0; j < TAMANHO; j++)//percorre colunas
        {
            matriz[i][j] = rand() % MAX;//preenche o elemento com umm numero aleatorio
        }
    }
   
    imprimir_matriz(matriz);
    
    ordenar_coluna(matriz);

    imprimir_matriz(matriz);

    return 0;
}