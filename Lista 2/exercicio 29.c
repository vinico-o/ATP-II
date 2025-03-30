//Escreva um programa em C que roteie os elementos de uma matriz
//3x3 em 90 graus no sentido anti-hor ́ario.

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

    printf("\n");
}

int main()
{       
    //inicializando as variaveis
    int matriz[TAMANHO][TAMANHO] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    int matriz_rotacionada[TAMANHO][TAMANHO];

    //imprime a mtriz nao rotacionada
    imprimir_matriz(matriz);

    //rotação da matriz
    for(int i = 0; i < TAMANHO; i++)//linha da matriz rotacionada
    {
        for(int j = 0; j < TAMANHO; j++)//coluna da matriz rotacionada
        {
            matriz_rotacionada[i][j] = matriz[TAMANHO - j - 1][i];//posicionamento dos elementos
        }
    }
    
    //imprime a matriz rotacionada
    imprimir_matriz(matriz_rotacionada);

    return 0;
}