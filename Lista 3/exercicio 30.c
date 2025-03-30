/*Declare e inicialize uma estrutura aninhada para armazenar as informa ̧c ̃oes de
um ponto (x, y, z) e imprima seus valores.*/

#include <stdio.h>

typedef struct
{
    int x;
    int y;
    int z;
}Ponto;


typedef struct
{
    Ponto ponto; 
}Coordenada;

int main ()
{   
    Coordenada coordenada;

    printf("Digite o x: ");
    scanf("%d", &coordenada.ponto.x);
    printf("Digite o y: ");
    scanf("%d", &coordenada.ponto.y);
    printf("Digite o z: ");
    scanf("%d", &coordenada.ponto.z);

    printf("x: %d\n", coordenada.ponto.x);
    printf("y: %d\n", coordenada.ponto.y);
    printf("x: %d\n", coordenada.ponto.z);

    return 0;
}