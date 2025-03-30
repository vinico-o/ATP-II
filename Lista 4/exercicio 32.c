/*Escreva um programa em C para encontrar arquivos duplicados em um
diret ́orio.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int CompararArquivos(FILE *arquivo1, FILE *arquivo2);

int main ()
{
    char diretorio[200] = "D:\\UNESP\\Ano 1\\Semestre 2\\ATP II\\Lista 4\\output\\exercicio 32\\";
    char arquivo[3][40] = {{"exercicio 32_1.txt"}, {"exercicio 32_2.txt"}, {"exercicio 32_3.txt"}};
    char nome_arquivo1[200], nome_arquivo2[200];
    int verif;

    //realiza a comparacao de todos os arquivos entre si
    for(int i = 0; i < 3; i++)
    {
        for(int j = i + 1; j < 3; j++)
        {

            strcpy(nome_arquivo1, diretorio);
            strcat(nome_arquivo1, arquivo[i]);

            strcpy(nome_arquivo2, diretorio);
            strcat(nome_arquivo2, arquivo[j]);

            FILE *arq1 = fopen(nome_arquivo1, "r");
            FILE *arq2 = fopen(nome_arquivo2, "r");

            verif = CompararArquivos(arq1, arq2);

            if(verif == 1)
            {
                printf("Arquivos %s %s sao iguais!\n", nome_arquivo1, nome_arquivo2);
            }
            else
            {
                printf("Arquivos %s %s sao diferentes!\n", nome_arquivo1, nome_arquivo2);
            }
        }
    }

    return 0;
}

int CompararArquivos(FILE *arquivo1, FILE *arquivo2)
{
    char c1, c2;

    while (fscanf(arquivo1, "%c", &c1) != EOF && fscanf(arquivo2, "%c", &c2) != EOF)
    {
        if(c1 != c2)
        {
            return 0;
        }
    }

    return 1;
    
}