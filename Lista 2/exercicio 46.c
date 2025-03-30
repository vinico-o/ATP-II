//Escreva um programa em C que preencha uma matriz 5x5 com
//n ́umeros aleat ́orios e depois encontre o segundo maior elemento.

#include <stdio.h>

//tamanho da matriz
#define TAMANHO 5

int main()
{   
    //iniciando as variáveis
    int matriz[TAMANHO][TAMANHO] = 
    {
        {1, 2, 3, 7, 8},
        {4, 10, 6, 10, 11},
        {7, 8, 9, 12, 9},
        {1, 1, 4, 15, 7},
        {1, 2, 17, 7, 0}
    };
    int maior[2];

    //inicializando os valores de maior (para não conter lixo)
    maior[0] = matriz[0][0];//maior valor
    maior[1] = matriz[0][0];//segundo maior valor

    for(int i = 0; i < TAMANHO; i++)//percorre as linhas
    {
        for(int j = 0; j < TAMANHO; j++)//percorre as colunas
        {
            if(matriz[i][j] > maior[0])
            {
                maior[1] = maior[0];//atribuindo o valor antigo de maior para o segundo maior
                maior[0] = matriz[i][j];//atualiza o valor de maior
            }

            if(matriz[i][j] > maior[1] && matriz[i][j] != maior[0])//verficando se os proximos elementos
            {
                maior[1] = matriz[i][j];
            }
        }
    }

    printf("Segundo maior elemento da matriz: %d\n", maior[1]);

    return 0;
}