//Escreva um programa em C que calcule a m ́edia dos elementos de
//uma matriz 4x4.

#include <stdio.h>

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

    printf("\n");
}

int main()
{       
    //inicializando as variaveis
    int matriz[TAMANHO][TAMANHO] = {{1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3}, {4, 4, 4, 4}};
    float media = 0;

    //imprime a matriz
    imprimir_matriz(matriz);

    //percorre linhas e colunas da matriz
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            media += matriz[i][j];//efetua a soma dos elementos da matriz
        }
    }

    media /= (TAMANHO * TAMANHO);//divide a soma pela qntd de elementos

    printf("Media dos elementos da matriz: %.2f\n", media);

    return 0;
}