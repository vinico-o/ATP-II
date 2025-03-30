//Escreva um programa em C q e use aritm ́etue declare um array de 10
//inteirosica de ponteiros para calcular a soma de todos os elementos
//do array. Imprima a soma.

#include <stdio.h>

#define TAMANHO 10

//função de impressão de vetor
void imprimir_vetor(int vetor[])
{   
    printf("VETOR: ");

    for(int i = 0; i < TAMANHO; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
}

int main ()
{
    int numero[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr;
    int soma = 0;

    //ptr recebe endereço de "numero"
    ptr = &numero;

    imprimir_vetor(numero);

    //percorre o vetor com ptr e faz a soma dos elementos
    for(int i = 0; i < TAMANHO; i++, ptr++)
    {
        soma += *ptr;
    }

    printf("Soma dos elementos do vetor: %d\n", soma);
    
    return 0;
}