/*Declare um arranjo de estruturas para armazenar as informa ̧c ̃oes de 4 produtos
(nome, c ́odigo, pre ̧co) e imprima seus valores.*/

#include <stdio.h>

#define NUMERO 4

typedef struct
{
    char nome[30];
    int codigo;
    float preco;
}Produto;


int main ()
{
    Produto produto[NUMERO];

    for(int i = 0; i < NUMERO; i++)
    {
        gets(produto[i].nome);
        scanf("%d", &produto[i].codigo);
        scanf("%f", &produto[i].preco);
        getchar();
    }

    for(int i = 0; i < NUMERO; i++)
    {
        printf("PRODUTO %d\n", i + 1);
        printf("Nome: %s\n", produto[i].nome);
        printf("Codigo %d\n", produto[i].codigo);
        printf("Preco: %.2f\n", produto[i].preco);
    }

    return 0;
}