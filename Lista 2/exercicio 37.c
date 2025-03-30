//Escreva um programa em C que multiplique uma matriz 2x3 por
//uma matriz 3x4 e armazene o resultado em uma matriz 2x4.

#include <stdio.h>

#define LINHA 2
#define COLUNA 3
#define LINHA2 3
#define COLUNA2 4

//função para imprimir a matriz
void imprimir_matriz(int matriz[LINHA][COLUNA2])
{
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNA2; j++)
        {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }
}

int main()
{
    int matriz1[LINHA][COLUNA] = {{1, 1, 1}, {2, 2, 2}};
    int matriz2[LINHA2][COLUNA2] = {{1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    int matriz3[LINHA][COLUNA2] = {0};


    for(int i = 0; i < LINHA; i++)//percorre linha
    {
        for(int j = 0; j < COLUNA2; j++)//percorre coluna
        {   
            for(int k = 0; k < COLUNA; k++)//contador para controlar o elemento a ser multiplicado
            {
                matriz3[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    imprimir_matriz(matriz3);

    return 0;
}
