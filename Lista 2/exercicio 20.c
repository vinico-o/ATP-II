//Escreva um programa em C que calcule a soma das colunas de
//uma matriz 4x3.

#include <stdio.h>

//define tamanho da matriz
#define LINHA 4
#define COLUNA 3

int main()
{   
    //inicializa as variaveis
    int matriz[LINHA][COLUNA] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int soma[COLUNA] = {0};

    //percorre a matriz
    for(int i = 0; i < COLUNA; i++)
    {
        for(int j = 0; j < LINHA; j++)
        {
            soma[i] += matriz[i][j];//soma os elementos da coluna
        }
    }

    //percorre o vetor de soma (soma de cada coluna)
    for(int i = 0; i < COLUNA; i++)
    {
        printf("Soma da coluna %d: %d\n", i, soma[i]);
    }

    return 0;
}