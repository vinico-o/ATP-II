//Escreva um programa em C que calcule a transposta de uma
//matriz 3x4.

#include <stdio.h>

//definido tamanho da matriz
#define LINHA 3
#define COLUNA 4

int main()
{
    //inicializando as variáveis
    int matriz[LINHA][COLUNA] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int matriz_transposta[COLUNA][LINHA];

    //transpondo a matriz
    for(int i = 0; i < COLUNA; i++)
    {
        for(int j = 0; j < LINHA; j++)
        {
            matriz_transposta[i][j] = matriz[j][i];
        }
    }

    //imprimindo a matriz original
    printf("MATRIZ ORIGINAL\n");
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNA; j++)
        {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    //imprimindo a matriz transposta
    printf("MATRIZ TANSPOSTA\n");
    for(int i = 0; i < COLUNA; i++)
    {
        for(int j = 0; j < LINHA; j++)
        {
            printf("%d ", matriz_transposta[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}