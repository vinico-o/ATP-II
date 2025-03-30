/*Escreva um programa em C para atualizar um registro em um arquivo
bin ́ario.*/

#include <stdio.h>

typedef struct 
{
    int id;
    char nome[20];
    float nota;
} Ficha;

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
    Ficha troca;

    int busca;

    FILE *arquivo;
    arquivo = fopen("exercicio 15.bin", "w+b");

    if(arquivo == NULL)
    {
        printf("Erro ao abrir arquivo!");
    }

    for(int i = 0; i < 6; i++)
    {
        fwrite(&aluno[i], sizeof(Ficha), 1, arquivo);
    }

    printf("Digite o numero do registro que sera atualizado: ");
    scanf("%d", &busca);

    fseek(arquivo, busca * sizeof(Ficha), SEEK_SET);
    fread(&troca, sizeof(Ficha), 1, arquivo);

    printf("Digite o novo valor de id: ");
    scanf("%d", &troca.id);
    getchar();
    printf("Digite o novo valor de nome: ");
    gets(troca.nome);
    printf("Digite o novo valor de nota: ");
    scanf("%f", &troca.nota);

    fseek(arquivo, busca * sizeof(Ficha), SEEK_SET);
    fwrite(&troca, sizeof(Ficha), 1, arquivo);

    fclose(arquivo);

    return 0;
}