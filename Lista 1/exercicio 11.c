//Escreva um programa em C que preencha um array de 15
//inteiros com n ́umeros aleat ́orios entre 0 e 50. Em seguida, encontre e imprima
//o maior valor do array.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int numeros[15];
   int maior = 0;
   
   srand(time(0));
   
   for(int i = 0; i < 15; i++){
       numeros[i] = rand() % 51; //51 inclui o numero 50 na geracao
       
       if(numeros[i] >= maior){
           maior = numeros[i];
       }
   }
   
   for(int i = 0; i < 15; i++){
       printf("numero no vetor %d: %d\n", i , numeros[i]);
   }

    printf("Maior valor: %d", maior);
    
    return 0;
}