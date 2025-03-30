//Escreva um programa em C que verifique se uma matriz 3x3  ́e
//uma matriz de Toeplitz.

#include <stdio.h>

//tamanho da matriz
#define TAMANHO 3

int matriz_toeplitz(int matriz[TAMANHO][TAMANHO])
{   
    //terminamos em TAMNHOS - 1 para não verificar números fora da mtriz
    for(int i = 0; i < TAMANHO - 1; i++)//percorre linhas
    {
        for(int j = 0; j < TAMANHO - 1; j++)//percorre colunas
        {
            if(matriz[i][j] != matriz[i + 1][j + 1])//o elemento precisa ser igual ao da diagonal direita
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{   
    //inicialização das variáveis
    int matriz[TAMANHO][TAMANHO] = {{1, 2, 3}, {4, 1, 2}, {5, 4, 1}};


    //se a função retirnar 1, é uma matriz de toeplitz
    if(matriz_toeplitz(matriz) == 1)
    {
        printf("A matriz eh de toeplitz\n");
    }
    else
    {
        printf("A matriz nao eh de toeplitz\n");
    }

    return 0;
}