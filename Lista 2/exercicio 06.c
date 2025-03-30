//Escreva um programa em C que calcule a diagonal principal de
//uma matriz 5x5.

#include <stdio.h>

#define TAMANHO 5

int main()
{
    //definindo a matriz 5x5
    int matriz[TAMANHO][TAMANHO] = 
    {
        {1, 2, 3, 4, 5}, 
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}
    };

    //imprimindo somente os numeros da diagonal principal (onde i = j)
    printf("DIAGONAL PRINCIPAL DA MATRIZ\n");
    for(int i = 0; i < TAMANHO; i++)//percorrendo as linhas
    {
        for(int j = 0; j < TAMANHO; j++)//percorrendo as colunas
        {
            if(i == j)
            {
                printf("%d", matriz[i][j]);
            } 
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }


    return 0;
}