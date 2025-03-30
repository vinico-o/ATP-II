/*Resolva um problema de cadastro de funcion ́arios utilizando estruturas.*/

#include <stdio.h>

#define NUMERO 2

typedef struct
{
    char nome[30];
    int idade;
    int telefone;
    float salario;
} Funcionario;


int main ()
{
    Funcionario funcionario[NUMERO];

    for(int i = 0; i < NUMERO; i++)
    {
        gets(funcionario[i].nome);
        scanf("%d", &funcionario[i].idade);
        scanf("%d", &funcionario[i].telefone);
        scanf("%f", &funcionario[i].salario);
        getchar();
    }

    for(int i = 0; i < NUMERO; i++)
    {
        printf("\nFUNCUINARIO %d\n", i + 1);
        printf("Nome: %s\n", funcionario[i].nome);
        printf("Idade: %d\n", funcionario[i].idade);
        printf("Telefone: %d\n", funcionario[i].telefone);
        printf("Matricula: %.2f\n", funcionario[i].salario);
    }

    return 0;
}