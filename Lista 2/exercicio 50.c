//Escreva um programa em C que verifique se uma matriz 4x4  ́e
//uma matriz de Drazin.

//satisfaz as condicoes A.AD = AD.A
//e AD.A.AD = AD, onde A eh uma matriz comum e AD eh a amtrz de drazin

#include <stdio.h>
#include <math.h>

#define TAMANHO 4
#define PRECISAO 0.0001

//funcao para imprimir a matriz
void imprimir_matriz(double matriz[TAMANHO][TAMANHO])
{
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            printf("%lf ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

//funcao para zerar a matriz
void zerar_matriz(double matriz[TAMANHO][TAMANHO])
{
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            matriz[i][j] = 0;
        }
    }
}

//funcao para multiplicar duas matrizes
void multiplicar_matriz(double matriz1[TAMANHO][TAMANHO], double matriz2[TAMANHO][TAMANHO], double matriz_resultado[TAMANHO][TAMANHO])
{
    zerar_matriz(matriz_resultado); // Zerar a matriz de resultado antes de multiplicar

    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            for(int k = 0; k < TAMANHO; k++)
            {
                matriz_resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

//funcao para comparar duas matrizes
int comparar_matriz(double matriz1[TAMANHO][TAMANHO], double matriz2[TAMANHO][TAMANHO])
{
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            if(fabs(matriz1[i][j] - matriz2[i][j]) > PRECISAO)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{   
    double A[TAMANHO][TAMANHO] =
    {
        {1, 2, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 0, 1},
        {0, 0, 0, 0}
    };
    double AD[TAMANHO][TAMANHO] =
    {
        {1, -2, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    double matriz_resultado[TAMANHO][TAMANHO];
    double matriz_resultado2[TAMANHO][TAMANHO];

    int verificacao = 0;

    //verifica A * AD == AD * A
    multiplicar_matriz(A, AD, matriz_resultado);
    multiplicar_matriz(AD, A, matriz_resultado2);
    verificacao += comparar_matriz(matriz_resultado, matriz_resultado2);

    //verifica AD * A * AD == AD
    multiplicar_matriz(A, AD, matriz_resultado);
    multiplicar_matriz(matriz_resultado, AD, matriz_resultado2);
    verificacao += comparar_matriz(matriz_resultado2, AD);

    //verifica se as duas condicoes foram satisfeitas
    if(verificacao == 2)
    {
        printf("A matriz eh de Drazin\n");
    }
    else
    {
        printf("A matriz nao eh de Drazin\n");
    }

    return 0;
}