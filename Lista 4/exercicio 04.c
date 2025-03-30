/*Escreva um programa em C para copiar o conte ́udo de um arquivo de texto
para outro arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char c;

    FILE *arquivo, *arquivo_copia;
    arquivo = fopen("exercicio 4.txt", "r");
    arquivo_copia = fopen("exercicio 4_copia.txt", "w");

    for(int i = 0; fscanf(arquivo, "%c", &c) != EOF; i++)
    {
        fprintf(arquivo_copia, "%c", c);
    }

    fclose(arquivo);
    fclose(arquivo_copia);

    return 0;
}