/*Declare um arranjo de estruturas para armazenar as informa ̧c ̃oes de 5 produtos
(nome, c ́odigo, pre ̧co) e imprima seus valores.*/

#include <stdio.h>

#define NUM 5

struct strc_produto
{
    char nome[30];
    int codigo;
    float preco;
};

int main ()
{
    struct strc_produto produto[NUM];

    for(int i = 0; i < NUM; i++)
    {
        printf("Digite o nome do produto: ");
        gets(produto[i].nome);
        printf("Digite o codigo: ");
        scanf("%d", &produto[i].codigo);
        printf("Digite o preco do produto: ");
        scanf("%f", &produto[i].preco);
        getchar();
    }

    for(int j = 0; j < NUM; j++)
    {
        printf("PRODUTO %d", j);
        printf("Nome: %s\n", produto[j].nome);
        printf("Codigo: %d\n", produto[j].codigo);
        printf("Preco: %.2f\n\n", produto[j].preco);
    }


    return 0;
}