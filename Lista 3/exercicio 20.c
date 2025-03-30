/*Declare um arranjo de estruturas para armazenar as informa ̧c ̃oes de 3 livros
(t ́ıtulo, autor, ano de publica ̧c ̃ao) e imprima seus valores.*/

#include <stdio.h>

#define NUM_LIVROS 3

typedef struct 
{
    char titulo[30];
    char autor[30];
    int ano;
} Livro;

int main ()
{
    Livro livro[NUM_LIVROS];

    for(int i = 0; i < NUM_LIVROS; i++)
    {
        printf("Digite o título do livro: ");
        gets(livro[i].titulo);
        printf("Digite o autor do livro: ");
        gets(livro[i].autor);
        printf("Digite o ano de publicacao do livro: ");
        scanf("%d", &livro[i].ano);
        getchar();
    }

    for(int i = 0; i < NUM_LIVROS; i++)
    {
        printf("Título: %s\n", livro[i].titulo);
        printf("Autor: %s\n", livro[i].autor);
        printf("Ano de publicacao: %d\n", livro[i].ano);
    }

    return 0;
}