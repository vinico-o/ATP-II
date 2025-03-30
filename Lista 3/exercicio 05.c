/*Acesse os componentes de uma estrutura de aluno (nome, matr ́ıcula, nota)
utilizando o operador “->” e imprima seus valores.*/

#include <stdio.h>

typedef struct 
{
    int id;
    char nome[20];
} Ficha;


int main ()
{
    Ficha *aluno;
    Ficha aluno1 = {101, "vinicius"};

    aluno = &aluno1;

    printf("ID = %d\n", aluno->id);
    printf("ID = %s\n", aluno->nome);

    return 0;
}