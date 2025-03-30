//Escreva um programa em C que verifique se duas matrizes 2x2
//s ̃ao iguais.

#include <stdio.h>

#define LINHA 2
#define COLUNA 2

int main()
{
    int matriz1[LINHA][COLUNA], matriz2[LINHA][COLUNA];
    int soma = 0;
    int eh_igual = 0;

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
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNA; j++)
        {
            printf("matriz2[%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    //comparação das matrizes
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNA; j++)
        {
            if(matriz1[i][j] != matriz2[i][j])
            {
                eh_igual = 0;
            }
        }
    }

    if(eh_igual == 1)
    {
        printf("As matrizes sao iguais\n");
    }
    else
    {
        printf("As matrizes sao diferentes\n");
    }

    return 0;
}
