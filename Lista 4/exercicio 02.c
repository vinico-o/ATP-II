/*Escreva um programa em C para ler e exibir o conte ́udo de um arquivo de
texto.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char linha[100];

    FILE *arquivo;
    arquivo = fopen("exercicio 2.txt", "r");

    if(arquivo == NULL)
    {
        printf("Arquivo nao lido!\n");
    }

    if(fgets(linha, 100, arquivo))
    {
        printf("%s", linha);
    }

    fclose(arquivo);

    return 0;
}