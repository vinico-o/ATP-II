//Escreva um programa em C que preencha um array de 12
//inteiros com n ́umeros aleat ́orios entre -20 e 20. Em seguida, conte e imprima
//quantos n ́umeros s ̃ao negativos.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int numeros[12];
   int cont_negativo = 0;
   
   srand(time(0));
   
   for(int i = 0; i < 12; i++){
       numeros[i] = -20 + rand() % 41; //se gerar um numero < 20, teremos um numero final < 0
       
       if(numeros[i] < 0){
           cont_negativo++;
       }
   }
   
   for(int i = 0; i < 12; i++){
       printf("numero no vetor %d: %d\n", i , numeros[i]);
   }

    printf("Qntd de numeros negativos: %d", cont_negativo);
    
    return 0;
}