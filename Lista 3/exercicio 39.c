/*Atribua os valores de uma estrutura de produto para outra e imprima os valores
da nova estrutura.*/

#include <stdio.h>
#include <string.h>

struct infoproduto1
{
    char nome[30];
    int codigo;
    float preco;
};

struct infoproduto2
{
    char nome2[30];
    int codigo2;
    float preco2;
};

int main ()
{
    struct infoproduto1 produto1 = {"Carro", 101, 32345.50};
    struct infoproduto2 produto2;

    strcpy(produto2.nome2, produto1.nome);
    produto2.codigo2 = produto1.codigo;
    produto2.preco2 = produto1.preco;

    printf("Nome 2: %s\n", produto2.nome2);
    printf("COdigo 2: %d\n", produto2.codigo2);
    printf("Preco 2: %.2f\n", produto2.preco2);


    return 0;
}