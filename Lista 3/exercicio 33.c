/*Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
funcion ́ario (nome, sal ́ario, departamento) e imprima o resultado.*/

#include <stdio.h>

typedef struct
{
    char nome[30];
    char departamento[30];
    float salario;
} Funcionario;

int main ()
{
    int tamanho;

    tamanho = sizeof(Funcionario);

    printf("Tamanho da estrutura: %d\n", tamanho);

    return 0;
}