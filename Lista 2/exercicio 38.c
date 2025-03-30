//Escreva um programa em C que verifique se uma matriz 3x3  ́e
//uma matriz de Hankel.

#include <stdio.h>

//tamanho da matriz
#define TAMANHO 3

int matriz_hankel(int matriz[TAMANHO][TAMANHO])
{   
    //começamos em i = 0 e j = 1, já que não precisamos verificar matriz[0][0]
    for(int i = 0; i < TAMANHO - 1; i++)//percorre linhas
    {
        for(int j = 1; j < TAMANHO; j++)//percorre colunas a partir de 1
        {
            if(matriz[i][j] != matriz[i + 1][j - 1])//o elemento precisa ser igual ao da diagonal esquerda
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
    int matriz[TAMANHO][TAMANHO] = {{1, 2, 3},{2, 3, 4},{3, 4, 5}};


    //se a função retirnar 1, é uma matriz de hankel
    if(matriz_hankel(matriz) == 1)
    {
        printf("A matriz eh de hankel\n");
    }
    else
    {
        printf("A matriz nao eh de hankel\n");
    }

    return 0;
}