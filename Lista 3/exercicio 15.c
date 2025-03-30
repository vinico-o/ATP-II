/*Atribua os valores de uma estrutura de endere ̧co para outra e imprima os valores
da nova estrutura.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char bairro[30];
    char rua[30];
    int numero;
} Endereco;

typedef struct
{
    char cpy_bairro[30];
    char cpy_rua[30];
    int cpy_numero;
} Copia;

int main ()
{
    Endereco endereco;
    Copia copia;

    gets(endereco.bairro);
    gets(endereco.rua);
    scanf("%d", &endereco.numero);

    strcpy(copia.cpy_bairro, endereco.bairro);
    strcpy(copia.cpy_rua, endereco.rua);
    copia.cpy_numero = endereco.numero;

    printf("Bairro: %s\n", copia.cpy_bairro);
    printf("Rua: %s\n", copia.cpy_rua);
    printf("Numero: %d\n", copia.cpy_numero);

    return 0;
}