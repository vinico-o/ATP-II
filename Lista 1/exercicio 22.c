//Escreva um programa em C que conte o n ́umero de elementos
//pares e  ́ımpares em um array de 20 inteiros.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    
    int vetor[20];
    int par = 0, impar = 0;
    
    for(int i = 0; i < 20; i++){ //montando um vetor de 
        vetor[i] = rand() % 101;  //inteiros com numeros aleatorios
        printf("numero no vetor %d: %d\n", i, vetor[i]);
    }
    
    for(int i = 0; i < 20; i++){
        if(vetor[i] % 2 == 0){
            par++;
            
        } else {
            impar++;
            
        }
    }
    
    printf("Qntd de numeros pares: %d\n", par);
    printf("Qntd de numeros impares: %d\n", impar);

    return 0;
}