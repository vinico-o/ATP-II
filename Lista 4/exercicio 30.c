/*Escreva um programa em C para ler um arquivo bin ́ario contendo registros
de alunos e exibir os dados formatados.*/

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
    int cont = 1;
    Ficha aluno;

    FILE *arquivo;
    arquivo = fopen("exercicio 30.bin", "rb");

    if(arquivo == NULL)
    {
        printf("Erro ao abrir arquivo!");
    }

    while(fread(&aluno, sizeof(Ficha), 1, arquivo) == 1)
    {
        printf("ALUNO %d\n", cont);
        printf("ID: %d\n", aluno.id);
        printf("Nome: %s\n", aluno.nome);
        printf("Nota: %.2f\n\n", aluno.nota);

        cont++;
    }

    fclose(arquivo);

    return 0;
}
