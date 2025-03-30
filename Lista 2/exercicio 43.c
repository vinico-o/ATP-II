//Escreva um programa em C que calcule a soma dos elementos
//abaixo da diagonal principal de uma matriz 4x4.

#include <stdio.h>

//tamanho da mtriz
#define TAMANHO 4

int main()
{
    int matriz[TAMANHO][TAMANHO] = 
    {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}
    };
    int soma = 0;

    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            if(i > j)//todos os elementos baixo da diagonal principal possuem i > j
            {
                soma += matriz[i][j];//acrescenta o elemento à soma
            }
        }
    }

    printf("Soma dos elementos abaixo da diagonal principal: %d\n", soma);

    return 0;
}
