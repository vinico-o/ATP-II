//Escreva um programa em C que declare um array de 8
//n ́umeros de ponto flutuante e use aritm ́etica de ponteiros para calcular a m ́edia
//dos valores.

#include <stdio.h>

#define TAMANHO 8

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

int main()
{
    float numero[TAMANHO] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};
    float soma = 0, media;
    float *ptr;

    //ptr recebe endereço de "numero"
    ptr = &numero;

    imprimir_vetor(numero);

    //percorre o vetor com ptr e faz a soma dos elementos
    for(int i = 0; i < TAMANHO; i++, ptr++)
    {
        soma += *ptr;
    }

    //calcula a media
    media = soma / TAMANHO;

    printf("Media dos elementos do vetor: %.2f\n", media);

    return 0;
}