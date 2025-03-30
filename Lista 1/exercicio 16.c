//Escreva um programa em C que declare um array de 10
//caracteres e use um ponteiro para contar quantos desses caracteres s ̃ao letras
//mai ́usculas.

#include <stdio.h>

int main()
{
    char string[10];
    char *ptr;
    int contador;

    printf("Digite uma palavra: ");
    fgets(string, 10, stdin);

    //ponteiro recebe endereco de string
    ptr = &string;

    //percorre a string verificando se ha letras maiusculas
    for(int i = 0; i < 10; i++, ptr++)
    {
        if(*ptr >= 'A' && *ptr <= 'Z')
        {
            contador ++;
        }
    }

    printf("numero de letras maiusculas: %d\n", contador);
    
}