//Escreva um programa em C que preencha uma matriz 3x3 com
//n ́umeros primos e depois calcule o produto dos elementos da diagonal secundaria.

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

    printf("\n");
}

//verifica se o número é primo
int eh_primo(int num)
{
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{   
    //inicializando as variáveis
    int matriz[TAMANHO][TAMANHO];
    int cont = 2;
    int produto = 1;

    //preenchendo a matriz com os numeros primos
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            if(eh_primo(cont) == 1)
            {
                matriz[i][j] = cont;//preenche com cont, se ele for primo
            }
            else
            {
                j--;//diminui j para garantir que todos os elementos sejam preenchidos
            }

            cont++;//aumenta cont, para achar o próximo primo
        }
    }

    printf("MATRIZ COM NUMEROS PRIMOS\n");
    imprimir_matriz(matriz);

    //efetuando a multiplicação
    for(int i = 0; i < TAMANHO; i++)//percorre as linhas
    {
        for(int j = TAMANHO - 1; j >= 0; j--)//percorre as colunas no sentido contrário
        {
            produto *= matriz[i][j];
            i++;//pula para a próxima linha, para continuar a diagonal
        }
    }

    printf("produto da diagonal secundaria: %d\n", produto);

    return 0;
}