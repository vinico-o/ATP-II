/*Escreva um programa em C para adicionar novos registros a um arquivo
bin ́ario.*/

#include <stdio.h>

typedef struct
{
    int id;
    char nome[20];
    float nota;
} Ficha;

int main()
{
    Ficha informacoes;

    FILE *arquivo;
    arquivo = fopen("exercicio 13.bin", "ab");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    printf("Digite o id do Registro: ");
    scanf("%d", &informacoes.id);
    getchar();
    printf("Digite o nome no Registro: ");
    gets(informacoes.nome);
    printf("Digite a nota do Registro: ");
    scanf("%f", &informacoes.nota);
    
    fwrite(&informacoes, sizeof(Ficha), 1, arquivo);

    fclose(arquivo);

    return 0;
}