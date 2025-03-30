/*Atribua os valores de uma estrutura para outra e imprima os valores da nova
estrutura.*/

#include <stdio.h>
#include <string.h>

struct carro1
{
    char marca1[20];
    char modelo1[20];
    int ano1;
};

struct carro2
{
    char marca2[20];
    char modelo2[20];
    int ano2;
};

int main ()
{
    struct carro1 carro = {"Chevrolet", "Opala", 1979};
    struct carro2 copia;

    strcpy(copia.marca2, carro.marca1);
    strcpy(copia.modelo2, carro.modelo1);
    copia.ano2 = carro.ano1;

    printf("Marca: %s\n", copia.marca2);
    printf("Modelo: %s\n", copia.modelo2);
    printf("Ano: %d\n", copia.ano2);    

    return 0;
}