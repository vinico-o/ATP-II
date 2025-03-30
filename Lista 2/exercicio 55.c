//Escreva um programa em C que verifique se uma matriz 3x3  ́e
//uma matriz de Cauchy generalizada.


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

//função de x
float funcao_x(int a)
{
    return (a);
}

//função de y
float funcao_y(int b)
{
    return  (- b);
}

//função para verificar se cada elemento é igual a operação
int verif_elemento(float matriz[TAMANHO][TAMANHO], int x[], int y[])
{
    for(int i = 0; i < TAMANHO; i++)//percorre linhas
    {
        for(int j = 0; j < TAMANHO; j++)//percorre colunas
        {
            //utiliza uma tolerancia para os valores comparados
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
        {0.1667, 0.1429, 0.125, 0.1111},
        {0.1429, 0.125, 0.1111, 0.1},
        {0.125, 0.1111, 0.1, 0.0909},
        {0.1111, 0.1, 0.0909, 0.0833}
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