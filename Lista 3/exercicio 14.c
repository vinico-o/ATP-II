/*Utilize a declara ̧c ̃ao de tipos (typedef) para simplificar a defini ̧c ̃ao de uma es-
trutura para armazenar as informa ̧c ̃oes de um cliente (nome, idade, endere ̧co) e
imprima seus valores.*/

#include <stdio.h>

typedef struct
{
    char nome[30];
    int idade;
    char endereco[60];
}Cliente;


int main ()
{
    Cliente cliente;

    gets(cliente.nome);
    scanf("%d", &cliente.idade);
    getchar();
    gets(cliente.endereco);

    printf("Nome: %s\n", cliente.nome);
    printf("Idade: %d\n", cliente.idade);
    printf("Endereco: %s\n", cliente.endereco);

    return 0;
}