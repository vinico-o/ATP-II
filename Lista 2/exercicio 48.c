//Escreva um programa em C que preencha uma matriz 4x4 com
//n ́umeros aleat ́orios e depois calcule a m ́edia dos elementos acima da diagonal
//principal.

#include <stdio.h>
#include <stdlib.h>
#include <time.h.>

#define TAMANHO 4
#define RAND_MAX 10

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

//função que soma os elementos acima da diagonal principal
int funcao_soma(int matriz[TAMANHO][TAMANHO])
{
    int soma = 0;

    //percorre linhas e colunas
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            if(i < j)//elementos acima da diagonal principal possuem i < j
            {
                soma += matriz[i][j];//acrescenta o elemento da matriz à soma
            }
        }
    }

    return soma;
}

int main()
{   
    //inicializando as variáveis
    int matriz[TAMANHO][TAMANHO];

    //definindo a semente como o tempo atual
    srand(time(NULL));

    //preenche a matriz com números aleatórios
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            matriz[i][j] = rand() % RAND_MAX;
        }
    }

    printf("MATRIZ GERADA\n");
    imprimir_matriz(matriz);

    printf("Soma dos elementos acima da diagonal principal: %d\n", funcao_soma(matriz));

    return 0;
}