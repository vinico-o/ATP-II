/*Escreva um programa em C para verificar se um arquivo de texto est ́a
vazio ou n ̃ao.*/

#include <stdio.h>

int main ()
{
    char conteudo[20];
    FILE *arquivo;
    arquivo = fopen("exercicio 19.txt", "r");

    if(arquivo == NULL)
    {
        printf("Erro ao abrir arquivo!");
        return 1;
    }

    //realiza a leitura do primeiro "conteudo" do texo, se for EOF (end of file) ele esta vazio
    if(fscanf(arquivo, conteudo) == EOF)
    {
        printf("O arquivo esta vazio!");
    } else
    {
        printf("O arquivo possui conteudo!");
    }

    fclose(arquivo);

    return 0;
}