/*Escreva um programa em C para encontrar a posi ̧c ̃ao de um registro em
um arquivo bin ́ario usando a fun ̧c ̃ao fgetpos().*/

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int id;
    char nome[20];
} Registro;

int main ()
{
    Registro registro;
    int busca;
    long int posicao;
    int verif = 0;

    FILE *arquivo;
    arquivo = fopen("exercicio 23.bin", "r");

    if(arquivo == NULL)
    {
        printf("Erro ao abrir arquivo!");
        return 1;
    }

    printf("Digite o id buscado: ");
    scanf("%d", &busca);

    while (fread(&registro, sizeof(Registro), 1, arquivo) == 1)
    {
        if(busca == registro.id)
        {
            verif = 1;
            fgetpos(arquivo, &posicao);
        }
    }

    fclose(arquivo);

    if(verif == 1)
    {
        printf("Posicao do registro: %ld", posicao);
    }
    else
    {
        printf("Registro nao encontrado!");
    }

    return 0;
}