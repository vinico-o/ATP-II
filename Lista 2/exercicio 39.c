//Escreva um programa em C que verifique se duas matrizes 3x3
//s ̃ao semelhantes.

//temos que matrizes semelhantes satisfazem a condicao B = P_inv.A.P 

#include <stdio.h>

#define TAMANHO 3

//funcao para multiplicar matrizes, nesse caso multiplicado
//multiplicaremos P_invertida por A, depois o resultado disso pela matriz P
void multiplicacao_matriz(double matriz1[TAMANHO][TAMANHO], double matriz2[TAMANHO][TAMANHO], double matriz_resultado[TAMANHO][TAMANHO])
{
    //percorrre linhas
    for(int i = 0; i < TAMANHO; i++)
    {
        //percorre colunas
        for(int j = 0; j < TAMANHO; j++)
        {
            //auxilia na multiplicacao dos elementos
            for(int k = 0; k < TAMANHO; k++)
            {
                matriz_resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

}

//compara se as matrizes sao iguais, se um elemento for diferente, saimos da funcao, pois ja sao deferentes
int matriz_iguais(double matriz1[TAMANHO][TAMANHO], double matriz2[TAMANHO][TAMANHO])
{
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            //compara os elementos das duas matrizes
            if(matriz1[i][j] != matriz2[i][j])
            {
                return 0;
            }
        }
    }

    return 1;
}

int main ()
{   
    //matrizes que utilizaremos para os operacoes e comparacoes
    double matriz_A[TAMANHO][TAMANHO] = {{1, 2, 3}, {0, 1, 4}, {5, 6, 0}};
    double matriz_B[TAMANHO][TAMANHO] = {{-18, -21, -2}, {-4, -5, 2}, {5, 6, 1}};
    double matriz_P[TAMANHO][TAMANHO] = {{1, 0, 1}, {0, 1, 1}, {1, 1, 1}};
    double matriz_P_inv[TAMANHO][TAMANHO] = {{0, -1, 1}, {-1, 1, 0}, {1, 0, -1}};

    //matrizes que armazenam os resutados das multiplicacoes
    double matriz_aux[TAMANHO][TAMANHO] = {0};
    double matriz_aux2[TAMANHO][TAMANHO] = {0};

    int eh_igual;

    //realiza as operacoes de multiplicacao
    multiplicacao_matriz(matriz_P_inv, matriz_A, matriz_aux);
    multiplicacao_matriz(matriz_aux, matriz_P, matriz_aux2);

    //eh_igual recebe o retorno da funcao, se retorenar 1, as matrizes sao iguais, se 0, diferentes
    eh_igual = matriz_iguais(matriz_B, matriz_aux2);
    
    if(eh_igual == 1)
    {
        printf("As matrizes sao semelhantes!\n");
    }
    else
    {
        printf("As matrizes nao sao semelhantes!\n");
    }


    return 0;
}