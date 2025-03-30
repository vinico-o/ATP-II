/*Escreva um programa em C para criar um arquivo de texto e escrever uma
mensagem nele.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *arquivo;
    arquivo = fopen("exercicio 1.txt", "w");

    fprintf(arquivo, "escrevendo em um arquivo txt\n");

    fclose(arquivo);

    return 0;
}