//Escreva um programa em C que leia 10 valores inteiros e
//calcule a soma de todos os elementos do array.

#include <stdio.h>

int main()
{
    int vetor_numeros[10];
    int soma = 0;
    
    for(int i = 0; i < 10; i++){
        printf("DIgite um numero inteiro: ");
        scanf("%d",&vetor_numeros[i]);
    }
    
    for(int i = 0; i < 10; i++){
        soma += vetor_numeros[i];
    }
    
    printf("A soma de todos os valores do array eh: %d\n", soma);
    
    return 0;
}