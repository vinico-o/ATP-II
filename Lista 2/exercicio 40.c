//Escreva um programa em C que realize a rota ̧c ̃ao de uma matriz
//quadrada 5x5 no sentido hor ́ario.

#include <stdio.h>

//ordem da matriz
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

    //rotação da matriz
    for(int i = 0; i < TAMANHO; i++)//percorre linhas
    {
        for(int j = 0; j < TAMANHO; j++)//percorre colunas
        {
            matriz_rotacionada[i][j] = matriz[TAMANHO - j - 1][i];//efetua "troca" do elementos
        }
    }

    //impressão da matriz normal
    imprimir_matriz(matriz);

    //imprssão da mtriz rotacionada
    imprimir_matriz(matriz_rotacionada);

    return 0;
}