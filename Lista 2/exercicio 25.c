//Escreva um programa em C que implemente o jogo da vida (Game
//of Life) de Conway em uma matriz 5x5.

#include <stdio.h>

#define TAMANHO 5

void imprimir_matriz(int matriz[TAMANHO][TAMANHO])
{
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            if(matriz[i][j] == 1)
            {
                printf(" * ");
            }
            else
            {
                printf(" . ");
            }
        }

        printf("\n");
    }

    printf("\n");
}

int verificar_vizinhos(int matriz[TAMANHO][TAMANHO], int i, int j)
{
    int cont = 0;

    for(int k = - 1; k < 2; k++)
    {
        for(int l = - 1; l < 2; l++)
        {
            if((i + k) >= 0 && (i + k) <= TAMANHO - 1 && (j + l) >= 0 && (j + l) <= TAMANHO - 1)
            {
                if(matriz[i + k][j + l] == 1)
                {
                    cont++;
                }
            }
            if(k == 0 && l == 0 && matriz[i][j] == 1)
            {
                cont--;
            }
        }
    }

    //cont - 1 descarta o "vizinho" i + 0, j + 0
    return cont;
}

void regras(int matriz[TAMANHO][TAMANHO])
{
    int nova_matriz[TAMANHO][TAMANHO];

    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            int vizinhos = verificar_vizinhos(matriz, i, j);

            if(matriz[i][j] == 1)
            {
                if(vizinhos < 2 || vizinhos > 3)
                {
                    nova_matriz[i][j] = 0;
                }
                else
                {
                    nova_matriz[i][j] = 1;
                }
            }
            else
            {
                if(vizinhos == 3)
                {
                    nova_matriz[i][j] = 1;
                }
                else
                {
                    nova_matriz[i][j] = 0;
                }
            }
        }
    }

    //copia a nova_matriz para a matriz original
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            matriz[i][j] = nova_matriz[i][j];
        }
    }
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = 
    {
        {0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}
    };

    printf("Estado Inicial: \n");
    imprimir_matriz(matriz);

    for(int geracao = 0; geracao < 8; geracao++)
    {
        regras(matriz);
        printf("Geracao %d:\n", geracao + 1);
        imprimir_matriz(matriz);
    }

    return 0;
}