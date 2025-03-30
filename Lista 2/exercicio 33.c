//Escreva um programa em C que encontre o menor elemento em
//uma matriz 5x5.

#include <stdio.h>

//tamanho da matriz
#define TAMANHO 5

int main()
{
    int matriz[TAMANHO][TAMANHO] = 
    {
        {10, 5, 95, 54, 4}, 
        {5, 18, 30, 2, 3}, 
        {23, 16, 5, 4, 55}, 
        {10, 0, 9, 54, 4}, 
        {8, -5, 15, 77, 2}
    };
    int menor = matriz[0][0];//inicializamos menor como o primeiro numero da matriz


    for(int i = 0; i < TAMANHO; i++)//percorre linhas
    {
        for(int j = 0; j < TAMANHO; j++)//percorre colunas
        {
            if(matriz[i][j] < menor)//se o elemento ij for menor que 'menor'
            {
                menor = matriz[i][j];//trocaremos o valor de 'menor'
            }
        }
    }

    printf("Menor elemento da matriz: %d", menor);

    return 0;
}