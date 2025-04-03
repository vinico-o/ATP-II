#include <stdio.h>

void QuickSort(int vetor[], int inicio, int fim);
int particionar(int vetor[], int inicio, int fim);
void imprimir_vetor(int vetor[], int tamanho);

int main()
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

    printf("Vetor original: ");
    imprimir_vetor(numeros, 100);
    printf("\n\n");

    QuickSort(numeros, 0, 99); // Ajustei o índice final para 99 (último índice)

    printf("Vetor ordenado: ");
    imprimir_vetor(numeros, 100);

    return 0;
}

void QuickSort(int vetor[], int inicio, int fim)
{
    if (inicio < fim)
    {
        int p = particionar(vetor, inicio, fim);

        QuickSort(vetor, inicio, p - 1);
        QuickSort(vetor, p + 1, fim);
    }
}

int particionar(int vetor[], int inicio, int fim)
{
    int pivo = vetor[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++)
    {
        if (vetor[j] < pivo)
        {
            i++;
            int temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
        }
    }
    int temp = vetor[i + 1];
    vetor[i + 1] = vetor[fim];
    vetor[fim] = temp;
    return (i + 1);
}

void imprimir_vetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
