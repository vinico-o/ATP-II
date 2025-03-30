//Escreva um programa em C que use um array de ponteiros para
//armazenar e imprimir 5 strings.

#include <stdio.h>
#include <stdlib.h>

#define QUANTIDADE 5
#define TAMANHO 10

int main()
{
    char *string[QUANTIDADE];

    for(int i = 0; i < QUANTIDADE; i++)
    {
        string[i] = malloc(TAMANHO * sizeof(char));
    }

    for(int i = 0; i < QUANTIDADE; i++)
    {
        printf("Digite uma palvra: ");
        gets(string[i]);
    }

    for(int i = 0; i < TAMANHO - 1; i++)
    {
        printf("Palavra %d: %s\n", i + 1, string[i]);
    }

    for(int i = 0; i < QUANTIDADE; i++)
    {
        free (string[i]);
    }

    return 0;
}