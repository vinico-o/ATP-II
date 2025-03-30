//Escreva um programa em C que leia 5 valores inteiros, armazene-
//os em um array e depois imprima os valores na ordem inversa.

#include <stdio.h>

int main()
{
    int vetor_numeros[5];
    
    for(int i = 0; i < 5; i++){
        printf("DIgite um numero inteiro: ");
        scanf("%d",&vetor_numeros[i]);
    }
    
    for(int i = 0; i < 5; i++){
        printf("numero no vetor %d eh: %d\n", i, vetor_numeros[i]);
    }

    return 0;
}