/*Declare e inicialize uma uni ̃ao para armazenar um valor char ou um valor inteiro
e imprima seus valores.*/

#include <stdio.h>

struct produto
{
    union codigo
    {
        int num_cod;
        char char_cod[4];
    } cod;

    int tipo;
};

int main ()
{
    struct produto prod;

    printf("Digite o tipo do produto: ");
    scanf("%d", &prod.tipo);

    if(prod.tipo == 1)
    {
        printf("Digite o codigo do produto: ");
        scanf("%d", &prod.cod.num_cod);
        printf("Codigo: %d", prod.cod.num_cod);
    }
    
    if(prod.tipo == 2)
    {
        printf("Digite o codigo do produto: ");
        scanf("%s", &prod.cod.char_cod);
        printf("Codigo: %s", prod.cod.char_cod);
    }

    return 0;
}