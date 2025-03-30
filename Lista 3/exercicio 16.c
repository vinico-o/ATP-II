/*Acesse os componentes de uma estrutura de filme (t ́ıtulo, diretor, ano de lan ̧camento)
utilizando o operador ponto ‘.’ e imprima seus valores.*/

#include <stdio.h>

struct info_filme
{
    char titulo[100];
    char diretor[100];
    int ano;
};

int main ()
{
    struct info_filme filme;

    printf("Digite o título do filme: ");
    gets(filme.titulo);
    printf("Digite o diretor do filme: ");
    gets(filme.diretor);
    printf("Digite o ano de publicacao do filme: ");
    scanf("%d", &filme.ano);

    printf("Titulo: %s\n", filme.titulo);
    printf("Diretor: %s\n", filme.diretor);
    printf("Ano de publicacao: %d\n", filme.ano);

    return 0;
}