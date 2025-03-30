//Escreva um programa em C que realize a rota ̧c ̃ao de uma matriz
//quadrada 5x5 no sentido anti-hor ́ario.

#include <stdio.h>

#define TAMANHO 5

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

int main()
{
    int matriz[TAMANHO][TAMANHO] =
    {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}
    };
    int matriz_rotacionada[TAMANHO][TAMANHO];

    //imprime a mtriz nao rotacionada
    imprimir_matriz(matriz);

    //rotação da matriz
    for(int i = 0; i < TAMANHO; i++)//linha da matriz rotacionada
    {
        for(int j = 0; j < TAMANHO; j++)//coluna da matriz rotacionada
        { 
            matriz_rotacionada[i][j] = matriz[j][TAMANHO - 1 - i];//posicionamento dos elementos
        }
    }

    //imprime a mtriz rotacionada
    imprimir_matriz(matriz_rotacionada);

    return 0;
}