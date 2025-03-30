/*Declare e inicialize uma estrutura para armazenar as informa ̧c ̃oes de um aluno
(nome, matr ́ıcula, nota) e imprima seus valores.*/

#include <stdio.h>

struct info_aluno 
{
    char nome[30];
    int matricula;
    float nota;
};

int main ()
{
    struct info_aluno aluno = {"Vinicius", 5052, 8.5};

    printf("Nome: %s\n",  aluno.nome);
    printf("Matricula: %d\n",  aluno.matricula);
    printf("Nota: %.2f\n",  aluno.nota);

    return 0;
}