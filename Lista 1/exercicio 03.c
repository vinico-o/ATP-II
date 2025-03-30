#include <stdio.h>

int verificar_primo(int numero){
    for(int i = 2; i < numero; i++){
        if(numero % i ==0){
            return 0;
        }
    }
    
    return 1;
}

int main()
{
    int vetor[7];
    int numero = 2;
    int eh_primo = 1;
    int contador = 0;
    
    while (contador < 7){
        if(verificar_primo(numero) == 1){
            vetor[contador] = numero;
            contador++;
        }
        numero++;
    }
    
    for(int i = 0; i < 7; i++){
        printf("numero primo no vetor %d e: %d\n", i, vetor[i]);
    }

    return 0;
}