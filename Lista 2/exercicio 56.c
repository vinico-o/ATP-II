//Escreva um programa em C que preencha uma matriz 4x4 com
//n ́umeros aleat ́orios e depois encontre o terceiro maior elemento.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 3
#define MAXIMO 40

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
    int maior[3] = {-1, -1, -1};

    //define semente como o tempo atual
    srand(time(NULL));

    //preenche a matriz com numeros aleatórios
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            matriz[i][j] = rand() % MAXIMO;
        }
    }

    for(int i = 0; i < TAMANHO; i++)//percorre as linhas
    {
        for(int j = 0; j < TAMANHO; j++)//percorre as colunas
        {
            if(matriz[i][j] > maior[0])
            {
                maior[2] = maior[1];
                maior[1] = maior[0];
                maior[0] = matriz[i][j];
            }
            else if(matriz[i][j] > maior[1] && matriz[i][j] != maior[0])
            {
                maior[2] = maior[1];
                maior[1] = matriz[i][j];
            }
            else if (matriz[i][j] > maior[2] && matriz[i][j] != maior[1])
            {
                maior[2] = matriz[i][j];
            }
            
        }
    }

    printf("MATRIZ\n");
    imprimir_matriz(matriz);

    printf("1 maior elemento: %d\n", maior[0]);
    printf("2 maior elemento: %d\n", maior[1]);
    printf("3 maior elemento: %d\n", maior[2]);

    return 0;
}