/*Escreva um programa em C para dividir um arquivo bin ́ario grande em
arquivos menores de tamanho fixo.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int id;
    char nome[20];
    float nota;
} Ficha;

int main ()
{
    int num_reg = 0;
    Ficha aluno;

    FILE *arquivo;
    arquivo = fopen("exercicio 27.bin", "rb");
    FILE *arquivo_dividido1;
    arquivo_dividido1 = fopen("exercicio 27_2.bin", "wb");
    FILE *arquivo_dividido2;
    arquivo_dividido2 = fopen("exercicio 27_3.bin", "wb");

    if(arquivo == NULL || arquivo_dividido1 == NULL || arquivo_dividido2 == NULL)
    {
        printf("Erro ao abrir arquivo!");

        return 1;
    }

    while(fread(&aluno, sizeof(Ficha), 1, arquivo) == 1)
    {
        num_reg++;
    }

    rewind(arquivo);
    for(int i = 0; fread(&aluno, sizeof(Ficha), 1, arquivo) == 1; i++)
    {
        if(i < (num_reg / 2))
        {
            fwrite(&aluno, sizeof(Ficha), 1, arquivo_dividido1);
        }
        else
        {
            fwrite(&aluno, sizeof(Ficha), 1, arquivo_dividido2);
        }
    }

    fclose(arquivo);
    fclose(arquivo_dividido1);
    fclose(arquivo_dividido2);

    return 0;
}
