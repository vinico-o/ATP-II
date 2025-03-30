//Declare um array de 10 inteiros e inicialize-o com valores de 0 a
//9. Escreva um programa em C que imprima todos os elementos do array.

#include <stdio.h>

int main()
{
    int vetor[10];

    for (int i = 0; i < 10; i++){
        vetor[i] = i;
    }

    for(int i = 0; i < 10; i++){
        printf("numero do vetor %d: %d\n", i, vetor[i]);
    }

    return 0;
}
