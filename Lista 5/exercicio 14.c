//Implemente uma fun ̧c ̃ao recursiva para verificar se uma palavra  ́e um
//pal ́ındromo.

#include <stdio.h>
#include <string.h>

#define TAMANHO 4

int funcao_eh_palindormo(char palavra[], int pos, int max)
{
    if(pos < max / 2)
    {
        if(palavra[pos] == palavra[max - pos - 1])
        {
            return funcao_eh_palindormo(palavra, pos + 1, max);
        }
        else
        {
            return 0;
        }
    }

    return 1;
}


int main()
{
    char string[TAMANHO];
    int eh_palindromo;

    printf("Digite uma palavra: ");
    gets(string);

    eh_palindromo = funcao_eh_palindormo(string, 0, TAMANHO);

    printf("%d", eh_palindromo);

    return 0;
}