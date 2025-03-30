/*Declare e inicialize uma estrutura aninhada para armazenar as informa ̧c ̃oes de
um endere ̧co (rua, n ́umero, cidade) e imprima seus valores.*/

#include <stdio.h>

typedef struct 
{
    char cidade[30];
    char rua[30];
    int numero;
} Endereco;

typedef struct 
{
    char nome[30];
    int idade;
    Endereco endereco; 
} Cliente;


int main ()
{
    Endereco endereco;
    Cliente cliente;

    gets(cliente.nome);
    scanf("%d", &cliente.idade);
    gets(cliente.endereco.cidade);
    gets(cliente.endereco.rua);
    getchar();
    scanf("%d", &cliente.endereco.numero);

    printf("Nome: %s\n", cliente.nome);
    printf("Idade: %d\n", cliente.idade);
    printf("Cidade: %s\n", cliente.endereco.cidade);
    printf("Rua: %s\n", cliente.endereco.rua);
    printf("Numero: %d\n", cliente.endereco.numero);

    return 0;
}