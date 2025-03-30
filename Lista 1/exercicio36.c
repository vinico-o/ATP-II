//Escreva um programa em C que receba 5 n ́umeros inteiros
//como argumentos na linha de comando e imprima o maior deles.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{   
    //remove o lixo de "maior"
    int maior = atoi(argv[1]);

    //percorre o "vetor" argv e identifica o maior parametro
    for(int i = 1; i < argc; i++)
    {
        if(maior < atoi(argv[i]))
        {
            maior = atoi(argv[i]);
        }
    }

    printf("Maior: %d\n", maior);

    return 0;
}