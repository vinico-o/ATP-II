/*Escreva um programa em C para calcular a m ́edia de valores armazenados
em um arquivo bin ́ario contendo n ́umeros reais.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float soma = 0;
    char palavra[100];
    float numero;
    FILE *arquivo;

    // abre o arquivo no modo leitura
    arquivo = fopen("exercicio 20.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    //le uma palavra do arquivo e converte em float, somando-os
    while (fscanf(arquivo, "%s", palavra) != EOF) 
    {
        numero = atof(palavra);
        soma += numero;
    }

    //fecha o arquivo
    fclose(arquivo);

    //exibe a soma dos numeros
    printf("Soma dos numeros no arquivo: %f\n", soma);

    return 0;
}
