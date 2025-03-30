//Escreva um programa em C que calcule a soma dos elementos de
//uma matriz 4x4.

#include <stdio.h>

#define LINHA 4
#define COLUNA 4

int main()
{
    int matriz[LINHA][COLUNA];
    int soma = 0;

    //leitura da matriz
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNA; j++)
        {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //impressão da matriz
    printf("MATRIZ\n");
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNA; j++)
        {
            soma += matriz[i][j];
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Soma dos elementos da matriz: %d",soma);

    return 0;
}
