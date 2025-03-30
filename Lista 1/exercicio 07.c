//Escreva um programa em C que leia 10 valores inteiros e
//calcule a soma de todos os elementos do array.

#include <stdio.h>

int main()
{
    float vetor_numeros[6];
    int soma = 0;
    
    for(int i = 0; i < 6; i++){
        printf("Digite um valor: ");
        scanf("%f",&vetor_numeros[i]);
        soma += vetor_numeros[i];
    }

    printf("A media dos valores eh: %.2f\n", soma/6.0);
    
    return 0;
}