//Escreva um programa em C que verifique se todos os ele-
//mentos de um array de 5 inteiros s ̃ao positivos.

#include <stdio.h>

int main()
{
    
    int vetor[5];
    
    for(int i = 0; i < 5; i++)
    {
        printf("digite o %d° numero do vetor: ", i + 1);
        scanf("%d",&vetor[i]);
    }
    
    for(int i = 0; i < 5; i++)
    {
        if(vetor[i] < 0)
        {
            printf("o numero %d < 0\n", vetor[i]);
            break; //se for encontrado um numero negativo, sairemos do loop
        } else 
        {
            
            if(i == 4) //se chegarmos ao final do vetor, quer dizer que todos os numeros sao positivos
            {
                printf("todos os elementos do vetor sao positivos\n");
            }
        }
    }


    return 0;
}