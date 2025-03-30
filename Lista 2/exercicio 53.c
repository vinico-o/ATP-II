//Escreva um programa em C que preencha uma matriz 5x5 com
//n ́umeros aleat ́orios e depois encontre o segundo menor elemento.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 5
#define RAND_MAX 200

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
    //inicializando as variáveis
    int matriz[TAMANHO][TAMANHO];
    int menor[2];

    srand(time(NULL));

    //preenchendo a matriz com os numeros primos
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            matriz[i][j] =  rand() % RAND_MAX;
        }
    }

    printf("MATRIZ COM NUMEROS PRIMOS\n");
    imprimir_matriz(matriz);

    //inicializando os valores de menor (para não conter lixo)
    menor[0] = matriz[0][0];//menor valor
    menor[1] = matriz[0][0];//segundo menor valor

    for(int i = 0; i < TAMANHO; i++)//percorre as linhas
    {
        for(int j = 0; j < TAMANHO; j++)//percorre as colunas
        {
            if(matriz[i][j] < menor[0])
            {
                menor[1] = menor[0];//atribuindo o valor antigo de maior para o segundo menor
                menor[0] = matriz[i][j];//atualiza o valor de menor
            }

            if(matriz[i][j] < menor[1] && matriz[i][j] != menor[0])//verficando se os proximos elementos
            {
                menor[1] = matriz[i][j];
            }
        }
    }

    printf("Segundo maior elemento da matriz: %d\n", menor[1]);

    return 0;
}