//Escreva um programa em C que leia duas strings e concatene-
//as. Imprima a string resultante.

#include <stdio.h>
#include <string.h>

int main()
{
    
    char string1[20], string2[20];
    
    printf("Digite a primeira string: ");
    fgets(string1, 20, stdin); //leitura de ate no maximo 20 caracteres
    
    printf("Digite a segunda string: ");
    fgets(string2, 20, stdin);
    
    printf("Strings concatenadas: %s\n", strcat(string1, string2)); //funcao de concatenacao

    return 0;
}