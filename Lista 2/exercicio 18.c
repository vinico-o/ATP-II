//Escreva um programa em C que verifique se uma matriz 3x3  ́e
//uma matriz identidade.

#include <stdio.h>

//define a ordem da matriz
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

int verificacao_diagonal(int matriz[TAMANHO][TAMANHO])
{
    for(int i = 0; i < TAMANHO; i++)//percorre linhas da matriz
    {
        for(int j = 0; j < TAMANHO; j++)//percorre colunas da matriz
        {
            if(i == j)//elementos da diagonal principal
            {
                if(matriz[i][j] != 1)//se elementos da diagonal principal forem diferente de 1, nao é identidade
                {
                    return 0;//nao é diagonal
                }
            }
            else
            {
                if(matriz[i][j] != 0)//se elementos fora da diagonal principal forem diferente de 0, nao é identidade
                {
                    return 0;//nao é diagonal
                }
            }
        }
    }

    return 1;//é diagonal
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int eh_diagonal;

    //imprimindo a matriz
    imprimir_matriz(matriz);

    //verificando se a matriz é identidade
    eh_diagonal = verificacao_diagonal(matriz);

    if(eh_diagonal == 1)
    {
        printf("A matriz eh identidade\n");
    }
    else
    {
        printf("A matriz nao eh identidade\n");
    }

    return 0;
}