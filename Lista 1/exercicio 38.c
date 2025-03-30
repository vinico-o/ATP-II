//Escreva um programa em C que declare um array de 10
//inteiros e passe esse array para uma fun ̧c ̃ao que encontre o maior elemento do
//array.

#include <stdio.h>

int funcao_maior(int vetor[])
{
    int maior = vetor[0];
    
    for(int i = 0; i < 10; i++)
    {
        if(vetor[i] > maior)
        {
            maior = vetor[i];
        }
        
    }
    
    return maior;
    
}

int main()
{
    int numeros[10] = {10, 20, 60, 35, 1, 9, 15, 0, 78, 95};
    int MAIOR;
    
    MAIOR = funcao_maior(numeros);
    
    printf("O maior numero do vetor é: %d\n", MAIOR);

    return 0;
}