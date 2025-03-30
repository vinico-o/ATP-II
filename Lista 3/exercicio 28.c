/*Acesse os componentes de uma estrutura de cliente (nome, idade, endere ̧co)
utilizando o operador ponto ‘.’ e imprima seus valores.*/

#include <stdio.h>

struct info_cliente
{
    char nome[30];
    int idade;
    char endereco[60];
};


int main ()
{
    struct info_cliente cliente = {"vinicius", 18, "p.prudente"};
    
    printf("Nome: %s\n", cliente.nome);
    printf("Idade: %d\n", cliente.idade);
    printf("Endereco: %s\n", cliente.endereco);

    return 0;
}