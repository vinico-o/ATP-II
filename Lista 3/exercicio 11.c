/*Utilize a defini ̧c ̃ao de tipos enumer ́aveis para representar os dias da semana e
imprima os valores.*/

#include <stdio.h>

enum semana
{
    DOMINGO = 1,
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO
};

int main ()
{
    printf("%d %d %d %d %d %d %d", DOMINGO, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO);
    
    return 0;
}