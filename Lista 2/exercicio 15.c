//Escreva um programa em C que inverta a ordem das linhas de
//uma matriz 3x3.

#include <stdio.h>

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
    //inicalização da matriz
    int temp;
    int matriz[TAMANHO][TAMANHO] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //tracando as linhas
    for(int i = 0; i < TAMANHO / 2; i++) //utilizamos TAMANHO/2 para chegar até a metade das linhas
    {                                   //se não, a troca seria feita duas vezes, resultando na matriz original
        for(int j = 0; j < TAMANHO; j++)
        {
            temp = matriz[i][j];
            matriz[i][j] = matriz[TAMANHO - i - 1][j];
            matriz[TAMANHO - i - 1][j] = temp;
        }
    }

    //imprimir a string invertida
    imprimir_matriz(matriz);

    return 0;
}