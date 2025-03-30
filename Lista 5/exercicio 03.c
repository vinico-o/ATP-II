//Crie uma fun ̧c ̃ao recursiva para encontrar o m ́aximo elemento em um array.

#include <stdio.h>

#define TAMANHO 10

int funcao_maior (int vetor[], int tamanho, int maior)
{
    //se chegarmos ao inicio
    if(tamanho == 0)
    {
        return maior;
    }
    //verifica se o numero do vetor é maior que "maior" e efetua a troca
    if(maior < vetor[tamanho - 1])
    {
        maior = vetor[tamanho - 1];
    } 
    
    //volta um elemento do vetor para verificar
    return funcao_maior(vetor, tamanho - 1, maior);
    
}

int main () 
{
    int array[TAMANHO] = {1, 4, 10, 15, 5, 22, 9, 0, 17, 8};
    int max = array[0];

    printf("%d", funcao_maior(array, TAMANHO, max));

    return 0;
}