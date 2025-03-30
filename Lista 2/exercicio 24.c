//Escreva um programa em C que verifique se duas matrizes 3x3
//s ̃ao ortogonais.

//antes de iniciarmos, temos que a A transposta = A inversa, com operações de matriz chegamos em que
//A.A transposta = Identidade

#include <stdio.h>

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

//funcao para verificar se a matriz resultado(da multiplicação) é a identidade
int verificacao_identidade(int matriz[TAMANHO][TAMANHO])
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
    //inicializando as variáveis
    int matriz[TAMANHO][TAMANHO] = {{0, 1, 0}, {1, 0, 0}, {0, 0, -1}};
    int matriz_transposta[TAMANHO][TAMANHO];
    int matriz_resultado[TAMANHO][TAMANHO] = {0};

    //transpondo a matriz, trocando linhas por colunas
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            matriz_transposta[i][j] = matriz[j][i];
        }
    }

    //imprimindo a matriz
    printf("MATRIZ:\n");
    imprimir_matriz(matriz);

    //multiplicando as matrizes
    for(int i = 0; i < TAMANHO; i++)//percorre as linhas da matriz
    {
        for(int j = 0; j < TAMANHO; j++)//percorre as colunas da matriz
        {   
            for(int k = 0; k < 3; k++)//percorre os elementos a serem multiplicados
            {
                matriz_resultado[i][j] += matriz[i][k] * matriz_transposta[k][j];
            }
        }
    }


    //se a função retornar 1, a matriz é identidade e consequentemente, ortogonal
    if(verificacao_identidade(matriz_resultado) == 1)
    {
        printf("A matriz eh ortogonal\n");
    }
    else
    {
        printf("A matriz nao eh ortogonal\n");
    }

    return 0;
}