//Escreva um programa em C que calcule a m ́edia dos elementos de
//uma matriz 3x3.

#include <stdio.h>

#define TAMANHO 3

int main()
{
    int matriz[TAMANHO][TAMANHO] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    float soma = 0;

    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            soma += matriz[i][j];
        }
    }

    printf("Media dos elementos: %.2f\n", soma / (TAMANHO * TAMANHO));

    return 0;
}