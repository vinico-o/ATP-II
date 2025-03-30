#include <stdio.h>

#define LENGHTP 2
#define LENGHTQ 2
#define GRAUP 1
#define GRAUQ 1
#define SOMA (GRAUP + GRAUQ)

//funcao para imprimir matriz
void imprimir_matriz(int matriz[SOMA][SOMA])
{
    for(int i = 0; i < SOMA; i++)
    {
        for(int j = 0; j < SOMA; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void construir_sylvester(int p[LENGHTP], int q[LENGHTQ], int matriz_formada[SOMA][SOMA])
{
    //zera a matriz para garantir que nao tenha lixo nela
    for(int i = 0; i < SOMA; i++)
    {
        for(int j = 0; j < SOMA; j++)
        {
            matriz_formada[i][j] = 0;
        }
    }

    // Preenche a matriz com os coeficientes dos polinômios
    //forma a primeira parte da matriz de sylvester baseada no polinomio 1
    for (int i = 0; i < GRAUQ; i++) 
    {
        for (int j = 0; j <= GRAUP; j++) 
        {
            matriz_formada[i][j + i] = p[j];//preenchemos a partir de j + i, pois na linha 2, comecamos os numero do polinomio qa partir da segunda coluna
        }
    }

    //forma a primeira parte da matriz de sylvester baseada no polinomio 2
    for (int i = 0; i < GRAUP; i++) 
    {
        for (int j = 0; j <= GRAUQ; j++) 
        {
            matriz_formada[i + GRAUQ][j + i] = q[j]; //comecamos na linha a partir do final do primeiro polinomio
        }
    }
}

//funcao para comparar matriz
int comparar_matriz(int matriz1[SOMA][SOMA], int matriz2[SOMA][SOMA])
{
    for(int i = 0; i < SOMA; i++)
    {
        for(int j = 0; j < SOMA; j++)
        {   
            //se um leemento for diferente, ja sao diferentes
            if(matriz1[i][j] != matriz2[i][j])
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    int p[LENGHTP] = {1, 1}; // polinomio x + 1
    int q[LENGHTQ] = {1, -1}; // polinomio x - 1

    int matriz_Sylvester[SOMA][SOMA] = {{1, 1}, {1, -1}};
    int matriz_formada[SOMA][SOMA];

    construir_sylvester(p, q, matriz_formada);
    printf("Matriz construida a partir dos polinomios\n");
    imprimir_matriz(matriz_formada);
    printf("Matriz dada pelo usuario\n");
    imprimir_matriz(matriz_Sylvester);

    //se as matrizes comparadas forem iguais, temos uma matriz de sylvester
    if(comparar_matriz(matriz_Sylvester, matriz_formada) == 1)
    {
        printf("A matriz eh de Sylvester\n");
    }
    else
    {
        printf("A matriz nao eh de Sylvester\n");
    }

    return 0;
}