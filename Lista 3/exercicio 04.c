/*Acesse os componentes de uma estrutura de aluno (nome, matr ́ıcula, nota)
utilizando o operador ponto ‘.’ e imprima seus valores.*/

#include <stdio.h>

struct strc_aluno
{
    char nome[100];
    int matricula;
    float nota;
};

int main()
{
    struct strc_aluno info_aluno;

    printf("Digite o nome: ");
    gets(info_aluno.nome);
    printf("Digite a matricula: ");
    scanf("%d", &info_aluno.matricula);
    printf("Digite a nota: ");
    scanf("%f", &info_aluno.nota);

    printf("Nome: %s\n", info_aluno.nome);
    printf("Matricula: %d\n", info_aluno.matricula);
    printf("Nota: %.2f\n", info_aluno.nota);
    
    return 0;
}