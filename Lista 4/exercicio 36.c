/*Escreva um programa em C para ler um arquivo bin ́ario e exibir estat ́ısticas
sobre seus dados (m ́edia, desvio padr ̃ao, etc.).*/

#include <stdio.h>
#include <math.h>

typedef struct
{
    int id;
    char nome[20];
    float nota;
} Ficha;

int main()
{
    int cont;
    double soma, media, desvio, soma_q;
    Ficha aluno;

    FILE *arquivo;
    arquivo = fopen("exercicio 36.bin", "rb");

    if(arquivo == NULL)
    {
        printf("Erro ao abrir arquivo!");
        
        return 1;
    }

    for(cont = 0; fread(&aluno, sizeof(Ficha), 1, arquivo); cont++)
    {
        soma += aluno.nota;
    }

    media = soma / cont;

    rewind(arquivo);

    for(cont = 0; fread(&aluno, sizeof(Ficha), 1, arquivo); cont++)
    {
        soma_q += pow(aluno.nota - media, 2);
    }

    desvio = sqrt((soma_q / cont));

    printf("Soma das notas: %.2lf\n", soma);
    printf("Media: %.2lf\n", media);
    printf("Desvio padrao: %.2lf\n", desvio);

    fclose(arquivo);

    return 0;
}