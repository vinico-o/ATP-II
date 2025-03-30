//Escreva um programa em C que preencha uma matriz 3x3 com
//n ́umeros primos e depois substitua os n ́umeros primos por 1.

#include <stdio.h>

#define TAMANHO 5

int verificar_primo(int numero){
    for(int i = 2; i < numero; i++){
        if(numero % i ==0){
            return 0;
        }
    }
    
    return 1;
}

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

int main()
{   
    //inicialização das variáveis
    int num = 2;//não não é primo por definição, então começamos com 2
    int matriz[TAMANHO][TAMANHO];
    
   for(int i = 0; i < TAMANHO; i++)//percorre linhas
   {
        for(int j = 0; j < TAMANHO; j++)//percorre colunas
        {
            if(verificar_primo(num) == 0)//verifica se o numero atual não é primo
            {
                num++;//caso não seja, acrescentamos 1 ao numero para achar o proximo primo
                j--;//decrescemos j para que essa coluna não seja preenchida agora, pois não temos o numero necessário
            }
            else
            {
                matriz[i][j] = num;// caso num seja primo, colocamos ele na matriz
                num++;
            }
        }
   }

    printf("MATRIZ COM PRIMOS\n");
    //impressão da matriz
    imprimir_matriz(matriz);

    //substituindo todos os elementos da matriz por 1
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            matriz[i][j] = 1;
        }
    }

    printf("MATRIZ COM 1s\n");
    //impressão da matriz
    imprimir_matriz(matriz);
    
    return 0;
}