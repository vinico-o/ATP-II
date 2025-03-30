//Escreva um programa em C que encontre o menor elemento em
//uma matriz 4x4.

#include <stdio.h>

#define TAMANHO 4

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
    int menor;

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

    //inicializa menor com o primeiro valor (evita usar o lixo)
    menor = matriz[0][0];

    //percorrendo a matriz comparando os valores com o menor valor
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            if(matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }
        }
    }

    printf("Maior elemento da matriz: %d\n", menor);

    return 0;
}