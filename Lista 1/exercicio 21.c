//Escreva um programa em C que encontre o maior e o menor
//elemento em um array de 10 inteiros.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    
    int vetor[10];
    int maior, menor;
    
    for(int i = 0; i < 10; i++){ //montando um vetor de 
        vetor[i] = rand() % 51;  //inteiros com numeros aleatorios
        printf("numero no vetor %d: %d\n", i, vetor[i]);
    }
    
    maior = vetor[0];
    menor = vetor[0];
    
    for(int i = 0; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}