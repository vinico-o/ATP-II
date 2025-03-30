/*Declare e inicialize uma uni ̃ao para armazenar um valor inteiro ou um valor
flutuante e imprima seus valores.*/

#include <stdio.h>

struct n_estrutura
{
    union valor
    {
        int n_int;
        float n_float;
    }numero;
    int tipo;
};

int main ()
{
    struct n_estrutura numero_strc;

    printf("Digite o tipo: ");
    scanf("%d", &numero_strc.tipo);

    if(numero_strc.tipo == 1)
    {
        printf("Digite o valor inteiro: ");
        scanf("%d", &numero_strc.numero.n_int);
        printf("Numero lido: %d\n", numero_strc.numero.n_int);
    }
    if(numero_strc.tipo == 2)
    {
        printf("Digite o valor flutuante: ");
        scanf("%f", &numero_strc.numero.n_float);
        printf("Numero lido: %.2f\n", numero_strc.numero.n_float);
    }

    return 0;
}