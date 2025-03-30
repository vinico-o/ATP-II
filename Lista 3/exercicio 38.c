/*Utilize a declara ̧c ̃ao de tipos (typedef) para simplificar a defini ̧c ̃ao de uma es-
trutura para armazenar as informa ̧c ̃oes de um contato (nome, telefone, email) e
imprima seus valores.*/

#include <stdio.h>

typedef struct
{
    char nome[30];
    char telefone[30];
    char email[60];
}Contato;

int main ()
{
    Contato contato = {"vinicius", "18123456789", "testeteste@unesp.br"};

    printf("Nome: %s\n", contato.nome);
    printf("Telefone: %s\n", contato.telefone);
    printf("Email: %s\n", contato.email);

    return 0;
}