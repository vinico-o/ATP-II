//Escreva um programa em C que verifique se uma matriz 3x3  ́e
//uma matriz de circulante.

#include <stdio.h>

#define TAMANHO 3

int verificacao_circular(int matriz[TAMANHO][TAMANHO + 2])
{
    //percorre até tamanho - 1, para nao verificar um numero fora da matriz
    for(int i = 0; i < TAMANHO - 1; i++)
    {
        for(int j = 0; j < TAMANHO + 2 - 1; j++)//tamanho + 2 (colunas da auxiliar) - 1
        {
            if(matriz[i][j] != matriz[i + 1][j + 1])//verifica se o numero é diferente ao de sua diagonal inferior direita
            {
                return 0;//nao é matriz circulante
            }
        }
    }

    return 1;//é matriz circulante
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {{1, 2, 3}, {3, 1, 2}, {2, 3, 1}};
    int matriz_aux[TAMANHO][TAMANHO + 2] = {0};

    //criando uma matriz auxilixar
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO + 2; j++)
        {
            //duplicando as duas primeiras colunas
            if(j >= TAMANHO)
            {
                matriz_aux[i][j] = matriz[i][j - TAMANHO];
            }
            else
            {
                matriz_aux[i][j] = matriz[i][j];
            }
        }
    }

    //retorno da função de verificação
    if(verificacao_circular(matriz_aux) == 1)
    {
        printf("Eh uma matriz circulante\n");
    }
    else
    {
        printf("Nao eh uma matriz circulante\n");
    }

    return 0;
}