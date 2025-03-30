/*Escreva um programa em C para calcular a frequˆencia de cada caractere
em um arquivo de texto.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char c;
    int cont[256] = {0};

    FILE *arquivo;
    arquivo = fopen("exercicio 35.txt", "r");


    while(fscanf(arquivo, "%c", &c) != EOF)
    {   
        cont[c]++;
    }

    fclose(arquivo);

    for(int i = 0; i < 256; i++)
    {
        if(cont[i] != 0)
        {
            printf("caractere %c: %d vezes\n", i, cont[i]);
        }
    }

    return 0;
}