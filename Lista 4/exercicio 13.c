/*Escreva um programa em C para ordenar registros em um arquivo bin ́ario
com base em um campo espec ́ıfico.*/

#include <stdio.h>

#define NUM 3

typedef struct aluno
{
    int id;
    char nome[20];
    float nota;
}Ficha;

void Trocar_Valores(Ficha *info1, Ficha *info2)
{
    Ficha aux;
    
    aux = *info1;
    *info1 = *info2;
    *info2 = aux;
}

int main ()
{
    Ficha informacoes[NUM];

    FILE *arquivo;
    arquivo = fopen("exercicio 13.bin", "r+b");

    if(arquivo == NULL)
    {
        printf("Erro ao abrir arquivo\n");

        return 1;
    }

    for(int i = 0; fread(&informacoes[i], sizeof(Ficha), 1, arquivo) != 1; i++)
    {
        if(feof(arquivo) == 1)
        {
            break;
        }
    }

    for(int j = NUM - 1; j > 0; j--)
    {
        for(int k = 0; k < j; k++)
        {
            if(informacoes[j].id > informacoes[j + 1].id)
            {
                Trocar_Valores(&informacoes[j], &informacoes[j+1]);
            }
        }
    }

    rewind(arquivo);

    for(int i = 0; i < NUM; i++)
    {
        fwrite(&informacoes[i], sizeof(Ficha), 1, arquivo);
    }

    return 0;
}