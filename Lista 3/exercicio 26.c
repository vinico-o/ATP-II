/*Utilize a declara ̧c ̃ao de tipos (typedef) para simplificar a defini ̧c ̃ao de uma estru-
tura para armazenar as informa ̧c ̃oes de um professor (nome, disciplina, sal ́ario)
e imprima seus valores.*/

#include <stdio.h>

typedef struct
{
    char nome[30];
    char disciplina[30];
    float salario;
} Professor;


int main ()
{
    Professor professor;

    gets(professor.nome);
    gets(professor.disciplina);
    scanf("%f", &professor.salario);

    printf("Nome: %s\n", professor.nome);
    printf("Disciplina: %s\n", professor.disciplina);
    printf("Salario: %.2f\n", professor.salario);

    return 0;
}