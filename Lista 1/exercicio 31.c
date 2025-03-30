//Escreva um programa em C que use um array de ponteiros
//para armazenar 5 n ́umeros inteiros e encontre o maior valor entre eles.

#include <stdio.h>

#define TAMANHO 5

int main()
{   
    int vetor[TAMANHO] = {1, 4, 6, 0, 2};
    int *vetor_ptr[TAMANHO];
    int *maior;

    //atribuindo valor aovetor de ponteiros
    for(int i = 0; i < TAMANHO; i++)
    {
        vetor_ptr[i] = &vetor[i];
    }

    
    maior = vetor_ptr[0];

    //verificando maior numero
    for(int i = 0; i < TAMANHO; i++)
    {
        if(*vetor_ptr[i] > *maior)
        {
            maior = vetor_ptr[i];
        }
    }

    printf("O maior numero eh: %d\n", *maior);

    return 0;
}