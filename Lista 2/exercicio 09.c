//Escreva um programa em C que encontre o maior elemento em
//uma matriz 3x3.

#include <stdio.h>

#define TAMANHO 3

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
    int matriz[TAMANHO][TAMANHO];
    int maior;

    //leitura da matriz
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d",&matriz[i][j]);
        }
    }

    //imprimindo a matriz
    imprimir_matriz(matriz);

    //inicializa maior com o primeiro valor (evita usar o lixo)
    maior = matriz[0][0];

    //percorrendo a matriz comparando os valores com o maior valor
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            if(matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }

    printf("Maior elemento da matriz: %d\n", maior);

    return 0;
}