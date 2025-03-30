/*Escreva um programa em C para contar o n ́umero de registros em um
arquivo bin ́ario.*/

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

    if(arquivo == NULL)
    {
        printf("Erro ao abrir arquivo!");

        return 1;
    }

    while(fread(&aluno, sizeof(Ficha), 1, arquivo) == 1)
    {
        num_reg++;
    }

    printf("Numero de registros: %d", num_reg);
    
    fclose(arquivo);
    return 0;
}