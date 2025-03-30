//Escreva um programa em C que calcule o determinante de uma
//matriz quadrada 3x3.

#include <stdio.h>

#define LINHA 3
#define COLUNA 3
#define COLUNAAUX 5

//função para imprimir a matriz
void imprimir_matriz(int matriz[LINHA][COLUNAAUX])
{
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNAAUX; j++)
        {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }
}

int main()
{
    int matriz[LINHA][COLUNA] = {{2, 1, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz_aux[LINHA][COLUNA + 2];
    int diag_principal = 0, diag_secundaria = 0;
    int produto = 1;

    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < (COLUNA + 2); j++)
        {
            if(j >= 3)
            {
                matriz_aux[i][j] = matriz[i][j - COLUNA];
            }
            else
            {
                matriz_aux[i][j] = matriz[i][j];
            }
        }
    } 

    imprimir_matriz(matriz_aux);

    for(int j = 0, cont = 0; cont < LINHA; cont++)
    {
        for(int i = 0; i < LINHA; i++, j++)
        {   
            produto *= matriz_aux[i][j];
        }
        printf("\n");
        j-=2;

        diag_principal += produto;
        produto = 1;
    }

    for(int j = (COLUNAAUX - 1), cont = 0; cont < LINHA; cont++)
    {
        for(int i = 0; i < LINHA; i++, j--)
        {   
            printf("i = %d\n", i);
            printf("j = %d\n", j);
            produto *= matriz_aux[i][j];
        }
        j+=2;
        
        diag_secundaria += produto;
        produto = 1;
    }


    printf("det = %d", diag_principal - diag_secundaria);

    return 0;
}