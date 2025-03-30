/*Resolva um problema de cadastro de livros utilizando estruturas.*/

#include <stdio.h>

struct strc_livro
{
    char titulo[100];
    char autor[100];
    int ano;
};

int main ()
{
    struct strc_livro livro;

    printf("Digite o título do livro: ");
    gets(livro.titulo);
    printf("Digite o autor do livro: ");
    gets(livro.autor);
    printf("Digite o ano de publicacao do livro: ");
    scanf("%d", &livro.ano);

    printf("Título: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autor);
    printf("Ano de publicacao: %d\n", livro.ano);

    return 0;
}