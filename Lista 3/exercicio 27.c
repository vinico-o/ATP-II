/*Atribua os valores de uma estrutura de contato para outra e imprima os valores
da nova estrutura.*/

#include <stdio.h>

struct contato
{
    char nome[30];
    char email[100];
};


int main ()
{
    struct contato contato1 = {"vinicius", "teste@unesp.br"};
    struct contato contato2 = {"mardegan", "testeteste@unesp.br"};
    
    contato2 = contato1;

    printf("Nome: %s\n", contato2.nome);
    printf("Email: %s\n", contato2.email);

    return 0;
}