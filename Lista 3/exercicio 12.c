/*Resolva um problema de cadastro de alunos utilizando estruturas.*/

#include <stdio.h>

#define NUM_ALUNOS 2

typedef struct
{
    char nome[30];
    int idade;
    int matricula;
    int telefone;
} Aluno;


int main ()
{
    Aluno aluno[NUM_ALUNOS];

    for(int i = 0; i < NUM_ALUNOS; i++)
    {
        gets(aluno[i].nome);
        scanf("%d", &aluno[i].idade);
        scanf("%d", &aluno[i].matricula);
        scanf("%d", &aluno[i].telefone);
        getchar();
    }

    for(int i = 0; i < NUM_ALUNOS; i++)
    {
        printf("ALUNO %d\n", i + 1);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Idade: %d\n", aluno[i].idade);
        printf("Matricula: %d\n", aluno[i].matricula);
        printf("Telefone: %d\n", aluno[i].telefone);
    }

    return 0;
}