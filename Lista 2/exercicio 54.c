//Escreva um programa em C que calcule a soma dos elementos de
//uma diagonal qualquer em uma matriz 4x4.

#include <stdio.h>

#define TAMANHO 4


//função para imprimir a matriz
void imprimir_matriz(int matriz[TAMANHO][TAMANHO + TAMANHO - 1])
{
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO + TAMANHO - 1; j++)
        {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    printf("\n");
}

int soma_diagonal(int matriz_aux[TAMANHO][TAMANHO + TAMANHO - 1], int inicio)
{
    int soma = 0;

    if(inicio < TAMANHO)
    {
        for(int i = 0, j = 0; i < TAMANHO; i++, j++)
        {
            soma += matriz_aux[i][j];
        }
    }
    else
    {
        for(int i = 0, j = inicio; i < TAMANHO; i++, j--)
        {
            printf("%d %d   %d \n", i, j, matriz_aux[i][j]);
            soma += matriz_aux[i][j];
        }
    }

    return soma;
}

void criar_matriz_aux(int matriz[TAMANHO][TAMANHO], int matriz_aux[TAMANHO][TAMANHO + TAMANHO - 1])
{
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO + TAMANHO - 1; j++)
        {
            if(j >= TAMANHO)
            {
                matriz_aux[i][j] = matriz[i][j - TAMANHO];
            }
            else
            {
                matriz_aux[i][j] = matriz[i][j];
            }
        }
    }
}

int main()
{
    int matriz_aux[TAMANHO][TAMANHO + TAMANHO - 1];
    int matriz[TAMANHO][TAMANHO] =
    {
        {1, 2, 3, 4},
        {3, 4, 5, 6},
        {5, 6, 7, 8},
        {7, 8, 9, 0},
    };
    int diagonal, posicao;

    printf("Digite a posicao inicial da diagonal: ");
    scanf("%d", &posicao);

    criar_matriz_aux(matriz, matriz_aux);

    imprimir_matriz(matriz_aux);

    diagonal = soma_diagonal(matriz_aux, posicao);

    printf("Soma da Diagonal: %d\n", diagonal);

    return 0;
}