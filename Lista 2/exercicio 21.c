//Escreva um programa em C que verifique se uma matriz 3x3  ́e
//uma matriz de permuta ̧c ̃ao.

#include <stdio.h>

#define TAMANHO 3

//verificação se nas linhas há apenas um número 1
int verif_linha(int matriz[TAMANHO][TAMANHO])
{   
    for(int i = 0; i < TAMANHO; i++)//percorre as linhas
    {
        int cont = 0;//inicia um contador que contará os numeros 1
        for(int j = 0; j < TAMANHO; j++)//percorre as colunas
        {
            if(matriz[i][j] == 1)//se houver numero 1, é somado 1 ao contador
            {
                cont++;
            }
        }

        if(cont != 1)//se houver mais de um numero 1 na linha, já será descartado
        {
            return 0;
        }

    }

    return 1;
}

int verif_coluna(int matriz[TAMANHO][TAMANHO])
{   
    for(int i = 0; i < TAMANHO; i++)//percorre as colunas
    {
        int cont = 0;//inicia um contador que contará os numeros 1
        for(int j = 0; j < TAMANHO; j++)//percorre as linhas
        {
            if(matriz[j][i] == 1)//se houver numero 1, é somado 1 ao contador
            {
                cont++;
            }
        }

        if(cont != 1)//se houver mais de um numero 1 na coluna, já será descartado
        {
            return 0;
        }

    }

    return 1;
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {{0, 0, 1}, {1, 0, 0}, {0, 1, 0}};
    
    if(verif_linha(matriz) + verif_coluna(matriz) == 2)//se as duas funções retornam 1
    {
        printf("Essa matriz eh de permutacao!\n");
    }
    else
    {
        printf("Essa matriz nao eh de permutacao!\n");
    }

    return 0;
}