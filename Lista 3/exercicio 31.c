/*Crie uma fun ̧c ̃ao que recebe uma estrutura de funcion ́ario (nome, sal ́ario, de-
partamento) como parˆametro e imprima seus valores.*/

#include <stdio.h>

typedef struct
{
    char nome[30];
    char departamento[30];
    float salario;
} Funcionario;

void imprimir_estrutura (Funcionario informacoes)
{
    printf("Nome: %s\n", informacoes.nome);
    printf("Departamento: %s\n", informacoes.departamento);
    printf("Salario: %.2f\n", informacoes.salario);
}

int main ()
{
    Funcionario funcionario;

    gets(funcionario.nome);
    gets(funcionario.departamento);
    scanf("%f", &funcionario.salario);
    getchar();

    imprimir_estrutura(funcionario);

    return 0;
}