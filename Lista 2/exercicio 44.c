//Escreva um programa em C que verifique se uma matriz 3x3  ́e
//uma matriz de Hankel circular.

#include <stdio.h>

//tamanho da matriz
#define TAMANHO 3

int matriz_HANKEL_CIRCULAR(int matriz[TAMANHO][TAMANHO], int v[TAMANHO])
{   
    if(matriz[0][TAMANHO - 1] != v[TAMANHO - 1] || matriz[TAMANHO - 1][0] != v[1])
    {
        return 0;
    }
    
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
    int matriz[TAMANHO][TAMANHO] = {{1, 2, 3}, {3, 1, 2}, {2, 3, 1}};
    int vetor[TAMANHO] = {1, 2, 3};


    //se a função retirnar 1, é uma matriz de hankel circular
    if(matriz_HANKEL_CIRCULAR(matriz, vetor) == 1)
    {
        printf("A matriz eh hankel circular\n");
    }
    else
    {
        printf("A matriz nao eh hankel circular\n");
    }

    return 0;
}