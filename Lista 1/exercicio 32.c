//Escreva um programa em C que use um array de ponteiros
//para armazenar 4 strings e encontre a string de maior comprimento.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QUANTIDADE 4
#define TAMANAHO_MAX 30

int main()
{
    char *string[QUANTIDADE];
    char *maior_string = NULL;
    int maior = 0;
    int tamanho[QUANTIDADE];

    for(int i = 0; i < QUANTIDADE; i++)
    {
        string[i] = malloc(sizeof(char) * TAMANAHO_MAX);
    }

    for(int i = 0; i < QUANTIDADE; i++)
    {
        printf("Digite a string %d: ", i);
        fgets(string[i], TAMANAHO_MAX, stdin);

        tamanho[i] = strlen(string[i]); //tambem eh possivel verificar o tamanho com um loop for,
    }                                   //onde temos um contador que sera incrementado ate string[i] == "\0"
   
    for(int i = 0; i < QUANTIDADE; i++)
    {
        if(maior < tamanho[i])
        {
            maior = tamanho[i];
            maior_string = string[i];
        }
    }
    
    printf("Maior string: %s", maior_string);

    for (int i = 0; i < QUANTIDADE; i++) 
    {
        free(string[i]);
    }

    return 0;
}