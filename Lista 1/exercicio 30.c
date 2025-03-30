//Escreva um programa em C que use um array de ponteiros
//para armazenar 3 strings, ordene as strings em ordem alfab ́etica e as imprima.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QUANTIDADE 3
#define TAMANHO 10

//função que ordena a string
// utilizamos um ponteiro que aponta para uma variavel ponteiro, e essa variavel aponta para a string
void trocar_string(char **stringM, char **stringm)
{
    //efetua a troica de posicao das strings
    char *temp = *stringM;
    *stringM = *stringm;
    *stringm = temp;

}

int main()
{
    char *string[QUANTIDADE];

    //aloca a memoria para as 3 strings
    for(int i = 0; i < QUANTIDADE; i++)
    {
        string[i] = malloc(TAMANHO * sizeof(char));
    }

    //leitura das strings
    for(int i = 0; i < QUANTIDADE; i++)
    {
        printf("Digite uma string: ");
        gets(string[i]);
    }

    //passando pelas strings comparando elas, e se necessario, efetua a troca
    for(int i = 0; i < QUANTIDADE; i++)
    {
        for(int j = 0; j < QUANTIDADE - i - 1; j++)
        {
            if(strcmp(string[j], string[j + 1]) > 0)
            {
                trocar_string(&string[j], &string[j + 1]);
            }
        }
    }
    
    //mostra a saida, com as strings ordenadas
    for(int i = 0; i < QUANTIDADE; i++)
    {
        printf("String %d: %s\n", i + 1, string[i]);
    }
    

    //limpa a memoria
    for(int i = 0; i < QUANTIDADE; i++)
    {
        free (string[i]);
    }

    return 0;
}