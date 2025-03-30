/*Escreva um programa em C para criar um arquivo bin ́ario contendo dados
estruturados e implementar uma fun ̧c ̃ao de busca eficiente.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 6

typedef struct
{
    int id;
    char nome[20];
    float nota;
} Ficha;

int Busca_Binaria(int inicio, int fim, int busca, FILE *arquivo);

int main ()
{
    Ficha aluno[6] = 
    {
        {1, "vinicius", 10.0},
        {2, "mardegan", 9.0},
        {3, "guilherme", 8.0},
        {4, "gustavo", 7.0},
        {5, "igor", 6.0},
        {6, "cauan", 5.0}
    };

    int busca;
    int resultado;

    FILE *arquivo;
    arquivo = fopen("exercicio 14.bin", "w+b");

    if(arquivo == NULL)
    {
        printf("Erro ao abrir arquivo!");
        return 1;
    }

    for(int i = 0; i < NUM; i++)
    {
        fwrite(&aluno[i], sizeof(Ficha), 1, arquivo);
    }

    printf("Digite o id buscado: ");
    scanf("%d", &busca);

    if(busca < 1 || busca > NUM)
    {
        printf("Registro nao encontrado!");

        return 1;
    }

    resultado = Busca_Binaria(0, NUM - 1, busca, arquivo);

    printf("ID: %d\nNome: %s\nNota: %.2f\n",aluno[resultado].id, aluno[resultado].nome, aluno[resultado].nota);

    fclose(arquivo);
    return 0;
}

int Busca_Binaria(int inicio, int fim, int busca, FILE *arquivo)
{
    int meio = inicio + (fim - inicio) / 2;
    Ficha aluno;

    fseek(arquivo, meio * sizeof(Ficha), SEEK_SET);
    fread(&aluno, sizeof(Ficha), 1, arquivo);

    if(busca == aluno.id)
    {
        return meio;
    }

    if(busca < aluno.id)
    {
        Busca_Binaria(inicio, meio - 1, busca, arquivo);
    } else
    {
        Busca_Binaria(meio + 1, fim, busca, arquivo);
    } 
}