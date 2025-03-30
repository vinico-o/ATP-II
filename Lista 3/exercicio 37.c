/*Declare e inicialize uma estrutura para armazenar as informa ̧c ̃oes de um cliente
(nome, idade, endere ̧co) e imprima seus valores.*/

#include <stdio.h>

struct infocliente
{
    char nome[30];
    int idade;
    char endereco[60];
};


int main ()
{
    struct infocliente cliente;

    gets(cliente.nome);
    scanf("%d", &cliente.idade);
    getchar();
    gets(cliente.endereco);

    printf("Nome: %s\n", cliente.nome);
    printf("Idade: %d\n", cliente.idade);
    printf("Endereco: %s\n", cliente.endereco);

    return 0;
}