//Escreva um programa em C que declare um array de 5 inteiros
//e use aritm ́etica de ponteiros para somar 10 a cada elemento do array. Imprima
//o array resultante.

#include <stdio.h>

//tamanho do array
#define TAMANHO 5

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
    int numero[TAMANHO] = {1, 2, 3, 4, 5};
    int *ptr;

    //ptr recebe o endereço de "numero"
    ptr = &numero;

    imprimir_vetor(numero);

    //percorre o vetor incrementando ao endereço
    for(int i = 0; i < TAMANHO; i++, ptr++)
    {
        //soma 10 ao conteúdo apontado por ptr
        *ptr += 10;
    }

    imprimir_vetor(numero);

    return 0;
}