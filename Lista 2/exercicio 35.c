//Escreva um programa em C que verifique se uma matriz 4x4  ́e
//uma matriz de Cauchy.

#include <stdio.h>
#include <math.h>

#define TAMANHO 4
#define PRECISAO 0.001

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

    printf("\n");
}

//função para verificar se cada elemento é igual a operação
int verif_elemento(float matriz[TAMANHO][TAMANHO], int x[], int y[])
{
    for(int i = 0; i < TAMANHO; i++)//percorre linhas
    {
        for(int j = 0; j < TAMANHO; j++)//percorre colunas
        {
            //utiliza uma tolerancia para comparar os elementos
            if(fabs(matriz[i][j] - (1.0 / x[i] - y[j])) < PRECISAO) 
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    int x[TAMANHO] = {1, 2, 3, 4}, 
        y[TAMANHO] = {5, 6, 7, 8};

    float matriz[TAMANHO][TAMANHO] = 
    {
        {-0.250, -0.200, -0.167, -0.143},
        {-0.333, -0.250, -0.200, -0.167},
        {-0.500, -0.333, -0.250, -0.200},
        {-1.000, -0.500, -0.333, -0.250}
    };

    if(verif_elemento(matriz, x, y) == 1)
    {
        printf("A matriz eh de cauchy\n");
    }
    else
    {
        printf("A matriz nao eh de cauchy\n");
    }

    return 0;
}