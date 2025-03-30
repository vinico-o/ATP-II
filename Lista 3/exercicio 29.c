/*Acesse os componentes de uma estrutura de cliente (nome, idade, endere ̧co)
utilizando o operador “-¿” e imprima seus valores.*/

#include <stdio.h>

typedef struct 
{
    char nome[20];
    int idade;
    char endereco[30];
}Cliente;

int main ()
{
    Cliente *ptr_cliente;
    Cliente cliente = {"vinicius", 18, "Aracatuba"};

    ptr_cliente = &cliente;

    printf("Nome: %s\n", ptr_cliente->nome);
    printf("Idade: %d\n", ptr_cliente->idade);
    printf("Endereco: %s\n", ptr_cliente->endereco);

    return 0;
}