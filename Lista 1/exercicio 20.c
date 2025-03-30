//Escreva um programa em C que declare um array de 12
//caracteres e use aritm ́etica de ponteiros para inverter a ordem dos caracteres no
//array.

#include <stdio.h>

#define TAMANHO 12

//função de impressão de vetor
void imprimir_vetor(char vetor[TAMANHO])
{   
    printf("VETOR: ");

    for(int i = 0; i < TAMANHO; i++)
    {
        printf("%c ", vetor[i]);
    }

    printf("\n");
}

int main()
{
    //inicialização de variáveis
    char caractere[TAMANHO] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'};
    char *ptr;
    char temp;

    ptr = &caractere;

    imprimir_vetor(caractere);

    //percorre o vetor com ptr, com *(ptr + i)
    for(int i = 0; i < TAMANHO / 2; i++)
    {
        //troca o primeiro elemento nao trocado com o ultimo elemento ainda nao trocado
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + TAMANHO - 1 - i);
        *(ptr + TAMANHO - 1 - i) = temp;
    }

    imprimir_vetor(caractere);

    return 0;
}