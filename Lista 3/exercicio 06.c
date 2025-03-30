/*Declare e inicialize uma estrutura aninhada para armazenar as informa ̧c ̃oes de
uma data (dia, mˆes, ano) e imprima seus valores.*/

#include <stdio.h>

struct strc_data 
{
    int dia;
    int mes;
    int ano;
};

struct strc_pessoa
{
    char nome[30];
    int idade;
    struct strc_data data;
};

int main ()
{
    struct strc_pessoa pessoa;
    struct strc_data data;

    gets(pessoa.nome);
    scanf("%d", &pessoa.idade);
    scanf("%d", &pessoa.data.ano);
    scanf("%d", &pessoa.data.mes);
    scanf("%d", &pessoa.data.dia);

    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Ano: %d\n", pessoa.data.ano);
    printf("Mes: %d\n", pessoa.data.mes);
    printf("Dia: %d\n", pessoa.data.dia);

    return 0;
}