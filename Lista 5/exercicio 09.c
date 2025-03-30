//Escreva uma fun ̧c ̃ao recursiva para inverter uma string.

#include <stdio.h>
#include <string.h>

void funcao_inveter(char string[], int pos, int max)
{
    char temp;

    if(pos < max / 2)
    {
        temp = string[pos];
        string[pos] = string[max - pos - 1];
        string[max - pos - 1] = temp;

        funcao_inveter(string, pos + 1, max);
    }

    return;

}


int main()
{
    char string[20];
    int tamanho;

    printf("Digite uma palavra: ");
    gets(string);

   tamanho = strlen(string);

   funcao_inveter(string, 0, tamanho);

   printf("String invertida: %s", string);

    return 0;
}