//Escreva um programa em C que declare um array de 6
//inteiros e passe esse array para uma fun ̧c ̃ao que conte quantos elementos s ̃ao
//positivos.

#include <stdio.h>

int funcao_maior(int vetor[], int *positivos)
{
    
    *positivos = 0;
    
    for(int i = 0; i < 6; i++)
    {
        if(vetor[i] > 0)
        {
            (*positivos)++; //os () sao utilizados pois sem eles, seria acrescentado 1
        }                   //ao endereço de memoria, nao ao conteudo de positivos
        
    }
    
    return *positivos;
    
}

int main()
{
    int numeros[6] = {-10, -20, -35, 1, 78, 95};
    int cont_positivos = 0;
    
    cont_positivos = funcao_maior(numeros, &cont_positivos);
    
    printf("A qntd de numeros positivos do vetor é: %d\n", cont_positivos);

    return 0;
}