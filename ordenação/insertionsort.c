/*implementação de insertion sort em c*/

#include <stdio.h>

void imprimir_vetor(int vetor[], int tamanho);

//seleciona o menor numero e troca com o primeiro numero nao ordenado do vetor
void OrdenarVetor(int vetor[], int tamanho);
int EncontrarPosicao(int vetor[], int numero, int fim);
void DeslocarVetor(int vetor[], int posicao, int tamanho);

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
    printf("vetor original: ");
    imprimir_vetor(numeros, 100);
    printf("\n\n");
    OrdenarVetor(numeros, 100);
    printf("vetor ordenado: ");
    imprimir_vetor(numeros, 100);

    return 0;
}

void OrdenarVetor(int vetor[], int tamanho)
{
    int pos;
    int elemento;
    for(int i = 1; i < tamanho; i++)
    {
        elemento = vetor[i];
        pos = EncontrarPosicao(vetor, vetor[i], i - 1);
        DeslocarVetor(vetor, pos, i);
        vetor[pos] = elemento; 
    }
}

int EncontrarPosicao(int vetor[], int numero, int fim)
{
    //achamos a localizacao onde o numero é menor que o final (sua posição atual - 1)
    //e que seja menor que um outro numero
    int i;
    for(i = 0; i <= fim && vetor[i] <= numero; i++);

    //retornamos a posição do número
    return i;
}

void DeslocarVetor(int vetor[], int posicao, int tamanho)
{
    for(int i = tamanho - 1; i >= posicao; i--)
    {
        vetor[i + 1] = vetor[i];
    }
}

void imprimir_vetor(int vetor[], int tamanho)
{
    for(int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
}