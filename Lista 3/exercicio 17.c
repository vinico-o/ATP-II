/*Acesse os componentes de uma estrutura de filme (t ́ıtulo, diretor, ano de lan ̧camento)
utilizando o operador “->” e imprima seus valores.*/

#include <stdio.h>

typedef struct 
{
    char titulo[20];
    char diretor[20];
    int ano;
} Filme;


int main ()
{
    Filme *ptr_filme;
    Filme filme = {"Quincas Borba", "Machado de Assis", 1891};

    ptr_filme = &filme;

    printf("Titulo = %s\n", ptr_filme->titulo);
    printf("Diretor = %s\n", ptr_filme->diretor);
    printf("Ano = %d\n", ptr_filme->ano);

    return 0;
}