//Escreva um programa em C que multiplique uma matriz 3x3 por
//um escalar.

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

int main ()
{   
    //inicialização das variáveis
    int matriz[TAMANHO][TAMANHO] = {{1, 2, 2}, {3, 4, 1}, {1, 2, 1}};
    int escalar;

    //imprme a matriz original
    printf("Matriz\n");
    imprimir_matriz(matriz);

    //leitura do valor do escalar
    printf("Digite um escalar: ");
    scanf("%d",&escalar);

    for(int i = 0; i < TAMANHO; i++)//pecorre as linhas
    {
        for(int j = 0; j < TAMANHO; j++)//percorre as colunas
        {
            matriz[i][j] *= escalar;//o elemento recebe ele multiplicado pelo escalar
        }
    }

    //imprme a matriz multiplicada pelo escalar
    printf("Matrizz multiplicada por um escalar\n");
    imprimir_matriz(matriz);

    return 0;
}