/*Escreva um programa em C para calcular o tamanho total ocupado por
todos os arquivos em um diret ́orio.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char diretorio[200] = "D:\\UNESP\\Ano 1\\Semestre 2\\ATP II\\Lista 4\\output\\exercicio 31\\";
    char arquivo[3][40] = {{"exercicio 31_1.txt"}, {"exercicio 31_2.txt"}, {"exercicio 31_3.txt"}};
    char nome_arquivo[200];
    int tamanho = 0;
    char c;

    //criando os arquivos
    for (int i = 0; i < 3; i++) 
    {
        strcpy(nome_arquivo, diretorio);
        strcat(nome_arquivo, arquivo[i]);

        FILE *arq = fopen(nome_arquivo, "w");

        if (arq == NULL) 
        {
            printf("Erro ao criar o arquivo");

            return 1;
        }

        // Adicionando um número qualquer
        fprintf(arq, "%d", i * 334);

        fclose(arq);
    }

    for (int i = 0; i < 3; i++) 
    {
        strcpy(nome_arquivo, diretorio);
        strcat(nome_arquivo, arquivo[i]);

        FILE *arq = fopen(nome_arquivo, "r");

        if (arq == NULL) 
        {
            printf("Erro ao abrir o arquivo");

            return 1;
        }

        int tamanho_arq = 0;
        while(fscanf(arq, "%c", &c) != EOF)
        {
            tamanho_arq++;
        }

        tamanho += tamanho_arq;

        fclose(arq);
    }

    printf("tamanho do diretorio: %d bytes", tamanho);

    return 0;
}