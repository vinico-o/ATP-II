//Escreva um programa em C que calcule a m ́edia dos elementos de
//uma matriz 2x4.

#include <stdio.h>

#define LINHA 2
#define COLUNA 4

//função para imprimir a matriz
void imprimir_matriz(int matriz[LINHA][COLUNA])
{
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNA; j++)
        {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }
}

int main ()
{
    int matriz[LINHA][COLUNA];
    float soma = 0;

    //leitura dos valores da matriz
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNA; j++)
        {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d",&matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    //imprimindo a matriz
    imprimir_matriz(matriz);
    
    printf("Media dos valores da matriz: %d\n", soma / (LINHA * COLUNA));

    return 0;
}