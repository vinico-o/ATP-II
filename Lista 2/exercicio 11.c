//Escreva um programa em C que conte quantos elementos pares
//existem em uma matriz 3x3.

#include <stdio.h>

//define a ordem da matriz
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
    int matriz[TAMANHO][TAMANHO];
    int contador = 0;//inicializa contador com 0 para não ocorrer operações com lixo

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

    //percorrendo a matriz verificando se é par
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            if(matriz[i][j] % 2 == 0)
            {
                contador++;
            }
        }
    }

    printf("Numeros de elementos pares: %d\n", contador);

    return 0;
}