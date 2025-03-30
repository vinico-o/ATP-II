//Escreva um programa em C que verifique se uma matriz 3x3  ́e
//uma matriz esparsa (maioria dos elementos s ̃ao zeros).

#include <stdio.h>

#define TAMANHO 3

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
}

int main()
{   
    int matriz[TAMANHO][TAMANHO] = {{1, 1, 1}, {0, 1, 0}, {0, 0, 1}};
    int cont = 0;
    int esparsa = 0;

    imprimir_matriz(matriz);

    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            if(matriz[i][j] == 0)
            {
                cont++;
            }
        }
    }

    if(cont > (TAMANHO * TAMANHO / 2))
    {
        esparsa = 1;
    }

    if(esparsa == 1)
    {
        printf("A matriz eh esparsa");
    }
    else
    {
        printf("A matriz nao eh esparsa");
    }

    return 0;
}