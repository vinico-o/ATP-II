/*Escreva um programa em C para verificar se um n ́umero espec ́ıfico est ́a
presente em um arquivo bin ́ario contendo n ́umeros inteiros.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char palavra[100];
    int numero, busca;
    int verif = 0;

    FILE *arquivo;
    // abre o arquivo no modo leitura
    arquivo = fopen("exercicio 21.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Digite o numero buscado no arquivo: ");
    scanf("%d", &busca);

    //le uma palavra do arquivo e verifica se é igual ao numero buscado
    while (fscanf(arquivo, "%s", palavra) != EOF) 
    {
        numero = atoi(palavra);

        if(numero == busca)
        {
            verif = 1;
        }
    }

    //fecha o arquivo
    fclose(arquivo);

    if(verif == 1)
    {
        printf("Numero presente no arquivo!");
    }
    else
    {
        printf("Numero nao presente no arquivo!");
    }

    return 0;
}