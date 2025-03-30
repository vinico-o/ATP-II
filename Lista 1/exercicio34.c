//Escreva um programa em C que receba uma string como
//argumento na linha de comando e conte o n ́umero de caracteres dessa string.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv)
{

    printf("tamanho: %d\n", strlen(argv[1]));

    return 0;
}