/*Declare e inicialize uma estrutura para armazenar as informa ̧c ̃oes de um fun-
cion ́ario (nome, sal ́ario, departamento) e imprima seus valores.*/

#include <stdio.h>

typedef struct
{
    char nome[30];
    char departamento[30];
    float salario;
} Funcionario;


int main ()
{
    Funcionario funcionario;

    gets(funcionario.nome);
    gets(funcionario.departamento);
    scanf("%f", &funcionario.salario);
    getchar();

    printf("Nome: %s\n", funcionario.nome);
    printf("Departamento: %s\n", funcionario.departamento);
    printf("Salario: %.2f\n", funcionario.salario);

    return 0;
}