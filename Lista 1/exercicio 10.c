//Escreva um programa em C que preencha um array de 10
//inteiros com n ́umeros aleat ́orios entre 50 e 150. Calcule e imprima a m ́edia dos
//elementos do array.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int numeros[10];
   float media = 0;
   
   srand(time(0));
   
   for(int i = 0; i < 10; i++){
       numeros[i] = 50 + rand() % 101;//101 inclu o numero 100 na geracao
       media += numeros[i];
   }
   
   for(int i = 0; i < 10; i++){
       printf("numero no vetor %d: %d\n", i , numeros[i]);
   }

    printf("Media dos valores: %.2f", media/10.0);
    
    return 0;
}