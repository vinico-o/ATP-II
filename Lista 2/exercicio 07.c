//Escreva um programa em C que verifique se uma matriz 3x3  ́e
//sim ́etrica.

#include <stdio.h>

#define LINHA 3
#define COLUNA 3

int main()
{
    int matriz[LINHA][COLUNA], matriz_transposta[COLUNA][LINHA];
    int eh_igual = 1;

    //leitura da matriz
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNA; j++)
        {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //impressao da matriz
    printf("MATRIZ\n");
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNA; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }



    //transpondo a matriz (trocando linha por coluna)
    for(int i = 0; i < COLUNA; i++)
    {
        for(int j = 0; j < LINHA; j++)
        {
            matriz_transposta[i][j] = matriz[j][i];
        }
    }

    //impressão da matriz transposta
    printf("MATRIZ TRANSPOSTA\n");
    for(int i = 0; i < COLUNA; i++)
    {
        for(int j = 0; j < LINHA; j++)
        {
            printf("%d ", matriz_transposta[i][j]);
        }
        printf("\n");
    }

    //comparação das matrizes(na simétrica, a matriz é igual a sua transposta)
    for(int i = 0; i < LINHA; i++)
    {
        for(int j = 0; j < COLUNA; j++)
        {
            if(matriz[i][j] != matriz_transposta[i][j])
            {
                eh_igual = 0;
            }
        }
    }

    if(eh_igual == 1)
    {
        printf("A matriz eh simetrica\n");
    }
    else
    {
        printf("A matriz nao eh simetrica\n");
    }

    return 0;
}
