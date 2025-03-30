/*Escreva um programa em C para calcular a soma de todos os n ́umeros em
um arquivo de texto contendo n ́umeros inteiros.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int soma = 0;
    char palavra[100];
    int numero;
    FILE *arquivo;

    // abre o arquivo no modo leitura
    arquivo = fopen("exercicio 17.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    //le uma palavra do arquivo e converte em inteiro, somando-os
    while (fscanf(arquivo, "%s", palavra) != EOF) 
    {
        numero = atoi(palavra);
        soma += numero;
    }

    //fecha o arquivo
    fclose(arquivo);

    //exibe a soma dos numeros
    printf("Soma dos numeros no arquivo: %d\n", soma);

    return 0;
}
