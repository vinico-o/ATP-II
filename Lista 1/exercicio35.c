//Escreva um programa em C que receba um n ́umero inteiro
//como argumento na linha de comando e verifique se ele  ́e par ou  ́ımpar.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    //verifica se o numero digitado como argumento é par ou impar
    if(atoi(argv[1]) % 2 == 0)
    {
        printf("Numero par\n");
    }
    else
    {
        printf("Numero impar\n");
    }
}