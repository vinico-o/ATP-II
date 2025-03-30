//Escreva um programa em C que declare um array de 5
//inteiros e um ponteiro para inteiro. Use o ponteiro para modificar os valores
//dos elementos do array. Imprima o array resultante.

#include <stdio.h>

int main()
{
    int vetor[5] = {1, 2, 3, 4, 5};
    int *ptr;

    //ptr armazena o endereço de vetor
    ptr = &vetor;

    //"caminhando pelo vetor utilizando ptr++(+ 1 no endereço de vetor)"
    for(int i = 0; i < 5; i++, ptr++)
    {   
        //alterando o conteudo apontado por ptr, no enderço armazendo
        *ptr += 1;
    }

    //imprimindo o vetor alterado
    printf("vetor: ");   
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}