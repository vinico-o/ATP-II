//Escreva um programa em C que encontre a posi ̧c ̃ao (linha e coluna)
//de um elemento espec ́ıfico em uma matriz 3x3.

#include <stdio.h>

//define as dimensoes da matriz
#define TAMANHO 3

int main()
{   
    //inicialização das variáveis
    int chave, existe = 0;
    int matriz[TAMANHO][TAMANHO] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("Digite o numero de busca: ");
    scanf("%d",&chave);

    for(int i = 0; i < TAMANHO; i++)//percorrendo linhas
    {
        for(int j = 0; j < TAMANHO; j++)//percorrendo colunas
        {
            if(chave == matriz[i][j])//verifica se o numero buscado é igual ao elemento atual da matriz
            {
                existe = 1;//o numero de busca existe na matriz
                printf("Numero %d encontrado em matriz[%d][%d]\n", chave, i, j);//imprime o numero e onde foi encontrado
            }
        }
    }

    if(existe == 0)//se durante todo o processo existe = 0, o numero nao existe na matriz
    {
        printf("Numero nao encontrado!\n");
    }

    return 0;
}