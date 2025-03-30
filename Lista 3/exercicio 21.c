/*Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
produto (nome, c ́odigo, pre ̧co) e imprima o resultado.*/

#include <stdio.h>

typedef struct 
{
    char nome[30];
    int codigo;
    float preco;
} Produto;


int main ()
{
    int tamanho;

    tamanho = sizeof(Produto);

    printf("Tamanho da estrutura: %d\n", tamanho);

    return 0;
}