/*Escreva um programa em C para buscar e exibir um determinado caractere
em um arquivo de texto.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{   
    char c, busca;
    FILE *arquivo;
    arquivo = fopen("exercicio 6.txt", "r");

    printf("Digite a letra de busca: ");
    scanf("%c", &busca);

    for(int i = 0; fscanf(arquivo, "%c", &c) != EOF; i++)
    {
        if(c == busca)
        {
            printf("%c", c);
        }
    }

    fclose(arquivo);

    return 0;
}