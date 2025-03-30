/*Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
pessoa (nome, idade, altura) e imprima o resultado.*/

#include <stdio.h>

struct strc_pessoa
{
    char nome[30];
    int idade;
    float altura;
};

int main ()
{   
    int tamanho;

    tamanho = sizeof(struct strc_pessoa);
    printf("Tamanho da estrutura: %d", tamanho);

    return 0;
}