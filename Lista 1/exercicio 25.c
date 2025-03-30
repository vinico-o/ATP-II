//Escreva um programa em C que leia uma string e conte o n ́umero
//de caracteres, palavras e linhas na string.

#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100];
    int tamanho, palavra = 0;

    printf("Digite uma frase: ");
    gets(frase);

    tamanho = strlen(frase);

    for(int i = 0; frase[i] != '\0'; i++){
        if(frase[i] == 32){
            palavra++;
        }
    }

    printf("Numero de caracteres: %d\n", tamanho);
    printf("Numero de palavras: %d\n", palavra + 1);

    return 0;
}
