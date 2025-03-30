//Escreva um programa em C que preencha uma matriz 4x4 com
//n ́umeros aleat ́orios e depois ordene os elementos de cada linha.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 4
#define RAND_MAX 9

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

void ordenar_linha(int linha[TAMANHO])
{
    int temp;
    
    for(int i = 0; i < TAMANHO - 1; i++)
    {
        for(int j = 0; j < TAMANHO - i - 1; j++)
        {
            if(linha[j] > linha[j + 1])
            {
                temp = linha[j];
                linha[j] = linha[j + 1];
                linha[j + 1] = temp;
            }
        }
    }
}

int main()
{   
    int matriz[TAMANHO][TAMANHO];
    srand(time(NULL));//define o tempo atual como semente

    //preenche a matriz com valores aleatórios
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            matriz[i][j] = rand() % RAND_MAX;
        }
    }

    printf("MATRIZ NAO ORDENADA:\n");
    imprimir_matriz(matriz);

    for(int i = 0; i < TAMANHO; i++)//percorre as linhas
    {
        ordenar_linha(matriz[i]);
    }

    printf("MATRIZ ORDENADA:\n");
    imprimir_matriz(matriz);

    return 0;
}