/*Escreva um programa em C para criar um arquivo de texto com uma
estrutura de dados complexa e salvar no formato adequado.*/

#include <stdio.h>
#include <stdlib.h>

#define NUM_ALUNOS 6

typedef struct
{
    int ra;
    char nome[20];
    float nota;
} Registro;

int main ()
{
    Registro registro[NUM_ALUNOS] = 
    {
        {1, "vinicius", 10.0},
        {2, "mardegan", 9.0},
        {3, "guilherme", 8.0},
        {4, "gustavo", 7.0},
        {5, "igor", 6.0},
        {6, "cauan", 5.0}
    };

    FILE *arquivo;
    arquivo = fopen("exercicio 25.txt", "w");

    for(int i = 0; i < NUM_ALUNOS; i++)
    {
        fprintf(arquivo, "RA: %d\nNome: %s\nNota: %.2f\n\n", registro[i].ra, registro[i].nome, registro[i].nota);
    }

    fclose(arquivo);

    return 0;
}