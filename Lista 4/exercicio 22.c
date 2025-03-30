/*Escreva um programa em C para ler um arquivo de texto e exibir o n ́umero
de ocorrˆencias de uma determinada palavra.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char busca[100];
    char palavra[100];
    int contador = 0;

    FILE *arquivo;
    arquivo = fopen("exercicio 22.txt", "r");

    if(arquivo == NULL)
    {
        printf("Erro ao abri arquivo!");
        return 1;
    }

    printf("Digite a palavra buscada: ");
    gets(busca);

    while(fscanf(arquivo, "%s", palavra) != EOF)
    {
        if(strcmp(palavra, busca) == 0)
        {
            contador++;
        }
    }

    printf("A palavra %s aparece %d vezes\n", busca, contador);

    fclose(arquivo);

    return 0;
}