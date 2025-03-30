/*Escreva um programa em C para ler registros em um arquivo bin ́ario us-
ando acesso aleat ́orio.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 6

typedef struct 
{
    int id;
    char nome[20];
}Registro;


int main ()
{
    srand(time(0));
    int posicao = rand() % MAX;

    Registro registro;

    FILE *arquivo;
    arquivo = fopen("exercicio 24.bin", "r");

    if(arquivo == NULL)
    {
        printf("Erro ao abrir arquivo!");
    }

    fseek(arquivo, posicao * sizeof(Registro), SEEK_SET);
    fread(&registro, sizeof(Registro), 1, arquivo);

    printf("REGISTRO ENCONTRADO:\n");
    printf("id: %d\n", registro.id);
    printf("nome: %s\n", registro.nome);

    fclose(arquivo);

    return 0;
}