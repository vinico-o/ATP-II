/*Crie uma fun ̧c ̃ao que recebe uma estrutura de aluno (nome, matr ́ıcula, nota)
como parˆametro e imprima seus valores.*/

#include <stdio.h>

struct ficha_aluno
{
    char nome[100];
    int matricula;
    float nota;
};

void imprimir_estrutura (struct ficha_aluno aluno)
{
    printf("\nINFORMACOES DO ALUNO\n");
    printf("%s\n", aluno.nome);
    printf("%d\n", aluno.matricula);
    printf("%.2f\n", aluno.nota);
}

int main ()
{
    struct ficha_aluno informacoes;
    
    gets(informacoes.nome);
    scanf("%d", &informacoes.matricula);
    scanf("%f", &informacoes.nota);

    imprimir_estrutura(informacoes);

    return 0;
}