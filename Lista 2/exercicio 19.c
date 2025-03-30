//Escreva um programa em C que multiplique uma matriz 2x3 por
//uma matriz 3x2 e armazene o resultado em uma matriz 2x2.

#include <stdio.h>

#define LINHA 2
#define COLUNA 3
#define TAMANHO 2

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
    //inicialização das variáveis
    int matriz1[LINHA][COLUNA], matriz2[COLUNA][LINHA];
    int matriz3[TAMANHO][TAMANHO];

    //leitura da matriz1
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNA; j++)
        {
            printf("matriz1[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    //leitura da matriz2
    for(int i = 0; i < COLUNA; i++)
    {
        for(int j = 0; j < LINHA; j++)
        {
            printf("matriz2[%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    //multiplicação das matrizes
    for(int i = 0; i < TAMANHO; i++)//linha da matriz 2x2
    {
        for(int j = 0; j < TAMANHO; j++)//coluna da matriz 2x2
        {   
            matriz3[i][j] = 0;//remove o lixo

            for(int k = 0; k < 3; k++)
            {
                matriz3[i][j] += matriz1[i][k] * matriz2[k][j];//multiplicação dos elementos
            }
        }
    }

    //impressão da matriz resposta
    printf("Resultado da multiplicacao das matrizes: \n");
    imprimir_matriz(matriz3);

    return 0;
}
