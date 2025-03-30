//Escreva um programa em C que verifique se uma matriz 4x4  ́e
//uma matriz diagonal.

#include <stdio.h>

//define a ordem da matriz
#define TAMANHO 4

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

int verificacao_diagonal(int matriz[TAMANHO][TAMANHO])
{
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            if(i == j)
            {
                if(matriz[i][j] == 0)
                {
                    return 0;
                }
            }
            else
            {
                if(matriz[i][j] != 0)
                {
                    return 0;
                }
            }
        }
    }

    return 1;
}

int main()
{
    int matriz[TAMANHO][TAMANHO];
    int eh_diagonal;

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

    //verificando se a matriz é diagonal
    eh_diagonal = verificacao_diagonal(matriz);

    if(eh_diagonal == 1)
    {
        printf("A matriz eh diagonal\n");
    }
    else
    {
        printf("A matriz nao eh diagonal\n");
    }

    return 0;
}