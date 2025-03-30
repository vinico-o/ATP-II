//Escreva um programa em C que declare um array de 8
//inteiros e passe esse array para uma fun ̧c ̃ao que inverta a ordem dos elementos
//do array.

#include <stdio.h>

int inverter_vetor(int vetor[])
{
    
    int temp;
    
    for(int i = 0; i < 4; i++)//utilizamos somente ate a metade do vetor (8/2)
    {
        
        temp = vetor[i];//armazena o primeiro elemento numa variavel temporaria
        vetor[i] = vetor[7 - i];//troca o elemento da parte final para a parte do inicio
        vetor[7 - i] = temp;//o elemento do final recebe o elemento da temporaria
        
    }

    
}

int main()
{
    int numeros[8] = {-10, -20, -35, 1, 78, 95, 8, -1};
    
    printf("Vetor Normal:");
    
    for(int i = 0; i < 8; i++)
    {
        printf(" %d", numeros[i]);
    }
    
    inverter_vetor(numeros);
    
    printf("\nVetor invertido:");
    
    for(int i = 0; i < 8; i++)
    {
        printf(" %d", numeros[i]);
    }

    return 0;
}
