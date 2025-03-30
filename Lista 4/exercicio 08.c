/*Escreva um programa em C para ler e exibir o conte ́udo de um arquivo
bin ́ario.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char nome[18];
    FILE *arquivo;
    arquivo = fopen("exercicio 8.bin", "rb");

    fread(nome, sizeof(char), 17, arquivo);

    printf("%s\n", nome);

    fclose(arquivo);

    return 0;
}