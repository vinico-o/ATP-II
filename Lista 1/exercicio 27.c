//Escreva um programa em C que leia uma string e verifique
//se ela  ́e um pal ́ındromo.

#include <stdio.h>
#include <string.h>

int main()
{
    
    char string[20];
    int tamanho;
    int contador = 0;
    
    printf("Digite a string: ");
    gets(string); //leitura de ate no maximo 20 caracteres
    
    tamanho = strlen(string);
    
   for(int i = 0; i < tamanho / 2; i++)//percorremos ate a metade do vetor
   {
       if(string[i] == string[tamanho - i - 1])//verificamos se os caracteres sao iguais no seu vetor correspondente
       {
           contador++; //contador do numero de caracteres iguais
       }
   }
   
   if(contador == tamanho / 2) //se todos os caracteres sao iguais ao seu correspondente
   {                           //ate a metade da string, temos um palindromo
       printf("Essa string é um palindromo\n");
   } else 
   {
       printf("Essa string não é um palindromo\n");
   }

    return 0;
}