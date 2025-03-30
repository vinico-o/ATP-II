//Escreva um programa em C que declare um array de 5 inteiros.
//Use um ponteiro para acessar e imprimir todos os elementos do array.

#include <stdio.h>

#define TAMANHO 5

int main()
{
    int array[TAMANHO] = {1, 2, 3, 4, 5};
    int *ptr;

    //ptr recebe o enderco do inicio do vetor
    ptr = array;

    //soma ao ptr (endereco do vetor) e imprime seu conteudo (*ptr)
    for(int i = 0; i < TAMANHO; i++, ptr++)
    {
        printf("vetor[%d]: %d \n",i + 1, *ptr);
    }

    return 0;
}