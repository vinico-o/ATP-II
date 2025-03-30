/*Utilize a defini ̧c ̃ao de tipos enumer ́aveis para representar os meses do ano e
imprima os valores.*/

#include <stdio.h>

enum meses
{
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
};

int main ()
{
    printf("mes: %d\n", JANEIRO);
    printf("mes: %d\n", FEVEREIRO);
    printf("mes: %d\n", MARCO);
    printf("mes: %d\n", ABRIL);
    printf("mes: %d\n", MAIO);
    printf("mes: %d\n", JUNHO);
    printf("mes: %d\n", JULHO);
    printf("mes: %d\n", AGOSTO);
    printf("mes: %d\n", SETEMBRO);
    printf("mes: %d\n", OUTUBRO);
    printf("mes: %d\n", NOVEMBRO);
    printf("mes: %d\n", DEZEMBRO);

    return 0;
}