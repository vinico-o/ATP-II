/*Escreva um programa em C para substituir uma palavra por outra em um
arquivo de texto.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char palavra[30];
    char busca[30];
    char troca[30];
    FILE *arquivo;
    arquivo = fopen("exercicio 7.txt", "r");
    FILE *temp;
    temp = fopen("temp.txt", "w");

    printf("Digite a palavra a ser trocada: ");
    gets(busca);
    printf("Digite a palavra que sera trocada: ");
    gets(troca);

    while(fscanf(arquivo, "%s", palavra) != EOF)
    {
        if(strcmp(busca, palavra) != 0)
        {
            fprintf(temp, "%s ", palavra);
        }
        else
        {
            fprintf(temp, "%s ", troca);
        }
    }

    fclose(arquivo);
    fclose(temp);

    remove("exercicio 7.txt");
    rename("temp.txt", "exercicio 7.txt");

    return 0;
}