//Escreva um programa em C que determine se um array de
//10 inteiros  ́e sim ́etrico (um pal ́ındromo).

#include <stdio.h>

int main()
{
    
    int vetor[10];
    int contador = 0;
    
    for(int i = 0; i < 10; i++){
        printf("digite um numero: ");
        scanf("%d",&vetor[i]);
    }
    
    for(int i = 0; i < 5; i++){
        
        if(vetor[i] == vetor[9 - i]){ //utilizamos 9 pois os vetores comecam em 0
            contador++;             // vetificamos se o numero no vetor e seu correspondente no final sao iguais
        } 
    }
    
    if(contador == 5){ //se o contador chegar ate a metade do valor da qntd de vetores, teremos um palimdromo 
        printf("Esse vetor é um palindromo");
    } else {
        printf("Esse vetor não é um palindromo");
    }

    return 0;
}