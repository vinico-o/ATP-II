/*Acesse os componentes de uma estrutura de ponto (x, y, z) utilizando o operador
ponto ‘.’ e imprima seus valores.*/

#include <stdio.h>

struct coordenada
{
    int x;
    int y;
    int z;
};

int main ()
{
    struct coordenada pontos = {1, 2, 3};

    printf("x: %d\n", pontos.x);
    printf("y: %d\n", pontos.y);
    printf("z: %d\n", pontos.z);

    return 0;
}