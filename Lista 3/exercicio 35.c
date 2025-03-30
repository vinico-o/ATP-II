/*Utilize a defini ̧c ̃ao de tipos enumer ́aveis para representar as esta ̧c ̃oes do ano e
imprima os valores.*/

#include <stdio.h>

enum estacoes
{
    VERAO = 1,
    OUTONO,
    INVERNO,
    PRIMAVERA
};

int main ()
{
    printf("Verao = %d estacao\n", VERAO);
    printf("Outono = %d estacao\n", OUTONO);
    printf("Inverno = %d estacao\n", INVERNO);
    printf("Primavera = %d estacao\n", PRIMAVERA);

    return 0;
}