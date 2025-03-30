//Escreva um programa em C que verifique se uma matriz 2x2  ́e
//uma matriz de reflex ̃ao.

#include <stdio.h>
#include <math.h>

#define TAMANHO 2

//a função cria o elemento da matriz e já compara com a matriz dada pelo usuário
int matriz_reflexao (double matriz[TAMANHO][TAMANHO], double x, double y)
{
    double matriz_aux[TAMANHO][TAMANHO];
    double fator = 1 / (x*x + y*y);

    //definição da matriz de reflexão
    matriz_aux[0][0] = fator * (x*x - y*y);
    matriz_aux[0][1] = fator * (2 * x * y);
    matriz_aux[1][0] = fator * (2 * x * y);
    matriz_aux[1][1] = fator * (y*y - x*x);

    //percorre as linhas e colunas
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {   
            //se os valores forem diferentes, sai da função
            if(matriz[i][j] != matriz_aux[i][j])
            {
                return 0;
            }
        }
    }

    return 1;
}

int main ()
{   
    //inicialização das variáveis
    double matriz[TAMANHO][TAMANHO] = {{0, 1}, {1, 0}};
    double vetor[2] = {1, 1};
    int resultado;

    //resultador recebe o retorno da função
    resultado = matriz_reflexao(matriz, vetor[0], vetor[1]);

    //verifica se é ou nao uma matriz de reflexão
    if(resultado == 1)
    {
        printf("A matriz eh de reflexao\n");
    }
    else
    {
        printf("A matriz nao eh de reflexao\n");
    }

    return 0;
}