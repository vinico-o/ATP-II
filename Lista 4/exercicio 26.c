/*Escreva um programa em C para comparar dois arquivos de texto linha
por linha e mostrar as diferen ̧cas.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

int main ()
{
    char linha1[MAX];
    char linha2[MAX];
    int cont = 0;

    FILE *arquivo1;
    arquivo1 = fopen("exercicio 26.txt", "r");
    if (arquivo1 == NULL) 
    {
        printf("Erro ao abrir o arquivo1!\n");
        return 1;
    }

    FILE *arquivo2;
    arquivo2 = fopen("exercicio 26_2.txt", "r");
    if (arquivo2 == NULL) {
        printf("Erro ao abrir o arquivo2!\n");
        fclose(arquivo1);
        return 1;
    }

    while (fgets(linha1, MAX, arquivo1) != NULL && fgets(linha2, MAX, arquivo2) != NULL)
    {
        cont++;
        if(strcmp(linha1, linha2) != 0)
        {
            printf("Diferença encontrada na linha %d!\n", cont);
            printf("Linha 1: %s\n", linha1);
            printf("Linha 2: %s\n", linha2);
        }
    }
    

    fclose(arquivo1);
    fclose(arquivo2);

    return 0;
}