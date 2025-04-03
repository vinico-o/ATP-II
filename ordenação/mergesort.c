#include <stdio.h>

void OrdenarVetor(int vetor[], int inicio, int fim);
void IntercalarVetor(int vetor[], int inicio, int meio, int fim);
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

    OrdenarVetor(numeros, 0, 99); // Ajustei o fim para 99 (índice final)

    printf("Vetor ordenado: ");
    imprimir_vetor(numeros, 100);

    return 0;
}

void OrdenarVetor(int vetor[], int inicio, int fim)
{
    if(inicio < fim)
    {
        int meio = inicio + (fim - inicio) / 2;

        OrdenarVetor(vetor, inicio, meio);
        OrdenarVetor(vetor, meio + 1, fim);

        IntercalarVetor(vetor, inicio, meio, fim);
    }
}

void IntercalarVetor(int vetor[], int inicio, int meio, int fim)
{
    //encontrando o tamanho dos dois subvetores
    int tam1 = meio - inicio + 1;
    int tam2 = fim - meio;

    int v1[tam1], v2[tam2];

    //copiando os valores para os vetores temporarios
    for(int l = 0; l < tam1; l++)
    {
        v1[l] = vetor[inicio + l];
    }
    for(int l = 0; l < tam2; l++)
    {
        v2[l] = vetor[meio + l + 1];
    }
    
    int i = 0, j = 0, k = inicio;

    while(i < tam1 && j < tam2)
    {
        if(v1[i] <= v2[j])
        {
            vetor[k] = v1[i];
            i++;
            k++;
        }
        else
        {
            vetor[k] = v2[j];
            j++;
            k++;
        }
    }

    while(i < tam1)
    {
        vetor[k] = v1[i];
        i++;
        k++;
    }
    while(j < tam2)
    {
        vetor[k] = v2[j];
        j++;
        k++;
    }

}

void imprimir_vetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
