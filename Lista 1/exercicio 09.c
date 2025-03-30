//Escreva um programa em C que preencha um array de 20 inteiros
//com n ́umeros aleat ́orios entre 1 e 100. Em seguida, imprima todos os elementos
//do array.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); //utiliza a seed do numero baseada no tempo
    
    int vetor[20];
    
    for(int i = 0; i < 20; i++){
        vetor[i] = rand() % 101; //gera numeros aleatorios de 0 a 100
    }
    
    for(int i = 0; i < 20; i++){
        printf("numero no vetor %d: %d\n", i, vetor[i]);
    }
    return 0;
}