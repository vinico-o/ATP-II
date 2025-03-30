//Escreva um programa em C que verifique se uma matriz 3x3  ́e
//uma matriz de Vandermonde.

#include <stdio.h>
#include <math.h>

#define TAMANHO 3

int matriz_vandermonde(int matriz[TAMANHO][TAMANHO])
{
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {   
            if(matriz[i][j] != pow(matriz[i][1], j))
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {{1, 2, 4}, {1, 3, 9}, {1, 4, 16}};

    if(matriz_vandermonde(matriz) == 1)
    {
        printf("A matriz eh de vandermonde");
    }
    else
    {
        printf("A matriz nao eh de vandermonde");
    }

    return 0;
}