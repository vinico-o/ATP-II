/*Escreva um programa em C para contar o n ́umero de linhas em um arquivo
de texto.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char c;
    int cont = 0;

    FILE *arquivo;
    arquivo = fopen("exercicio 3.txt", "r");

    if(arquivo == NULL)
    {
        printf("Arquivo nao lido!\n");
    }

    for(int i = 0; fscanf(arquivo, "%c", &c) != EOF; i++)
    {
        printf("%c", c);

        //para caracteres unicos, utilizamos aspas simples
        if(c == '\n')
        {
            cont ++;
        }
        
    }

    printf("\nNumero de linhas: %d", cont);

    fclose(arquivo);

    return 0;
}