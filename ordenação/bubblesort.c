#include <stdio.h>

void imprimir_vetor(int vetor[], int tamanho);
void trocar_valores(int *a, int *b);

void ordenar_vetor (int vetor[], int tamanho)
{
    for(int i = tamanho - 1; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(vetor[j] > vetor[j + 1])
            {
                trocar_valores(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}

int main ()
{
    int numeros[100] = {
    72, 51, 18, 94, 67, 2, 32, 22, 1, 89,
    77, 28, 84, 40, 54, 91, 63, 87, 14, 19,
    45, 60, 57, 100, 6, 71, 74, 10, 24, 79,
    50, 92, 33, 37, 11, 53, 81, 46, 76, 95,
    8, 29, 97, 12, 39, 27, 56, 36, 35, 42,
    31, 98, 64, 86, 85, 13, 66, 78, 17, 47,
    69, 55, 41, 30, 80, 61, 70, 26, 82, 21,
    99, 48, 5, 44, 34, 7, 16, 65, 83, 90,
    25, 38, 9, 59, 68, 88, 52, 15, 73, 4,
    75, 43, 58, 96, 3, 62, 20, 49, 23, 93
};

    printf("Vetor desordenado: \n");
    imprimir_vetor(numeros, 100);
    ordenar_vetor(numeros, 100);
    printf("Vetor ordenado: \n");
    imprimir_vetor(numeros, 100);


    return 0;
}

void imprimir_vetor(int vetor[], int tamanho)
{
    for(int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void trocar_valores (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}