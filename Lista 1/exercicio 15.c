//Escreva um programa em C que declare um array de 7
//inteiros e use um ponteiro para calcular a soma dos elementos do array.

#include <stdio.h>

#include <stdio.h>

int main()
{
    int vetor[7] = {1, 2, 3, 4, 5, 6, 7};
    int *ptr;
    int cont = 0;

    //ptr armazena o endereço de vetor
    ptr = &vetor;

    //"caminhando pelo vetor utilizando ptr++(+ 1 no endereço de vetor)"
    while(cont < 7)
    {

        *ptr += *ptr;

        cont ++;
        ptr++;
    }

    //imprimindo a soma
    printf("soma: %d", *ptr); 
    

    return 0;
}