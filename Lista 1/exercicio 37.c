//Escreva um programa em C que declare um array de 5 inteiros
//e passe esse array para uma fun ̧c ̃ao que calcule a m ́edia dos elementos do array.

#include <stdio.h>

float funcao_media(int numeros[])
{
    int soma = 0;
    
    for(int i = 0; i < 5; i++) //percorre os elementos do vetor somando-os
    {
        soma += numeros[i];
    }
    
    return (float)soma/5; //casting da variavel soma para realizar a divisao
}

int main()
{
    int vetor[5];
    float media;
    
    for(int i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
    }
    
    media = funcao_media(vetor);
    
    printf("Media dos elementos do vetor: %.2f\n", media);

    return 0;
}