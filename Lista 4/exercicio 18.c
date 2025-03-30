/*Escreva um programa em C para encontrar o maior e o menor n ́umero em
um arquivo de texto contendo n ́umeros inteiros.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char palavra[100];
    int numero;
    int maior, menor;
    FILE *arquivo;

    //abre o arquivo no modo leitura
    arquivo = fopen("exercicio 18.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    fscanf(arquivo, "%s", palavra);
    maior = atoi(palavra);
    menor = atoi(palavra);
    rewind(arquivo);

    //le uma palavra do arquivo e converte em inteiro
    while (fscanf(arquivo, "%s", palavra) != EOF) 
    {
        numero = atoi(palavra);
        printf("%d\n", numero);

        if(numero > maior)
        {
            maior = numero;
        }
        if(numero < menor)
        {
            menor = numero;
        }
    }

    //fecha o arquivo
    fclose(arquivo);

    //exibe os numero encontrados
    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);

    return 0;
}
