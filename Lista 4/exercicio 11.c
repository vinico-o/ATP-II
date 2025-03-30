/*Escreva um programa em C para ler e exibir um registro espec ́ıfico em um
arquivo bin ́ario.*/

#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    int num;
    char nome[20];
};

int main ()
{
    struct aluno registro;

    int busca;

    FILE *arquivo;
    arquivo = fopen("exercicio 11.bin", "r+b");

    printf("Digite o id de busca: ");
    scanf("%d", &busca);

    rewind(arquivo);

    for(int i = 0; (fread(&registro, sizeof(struct aluno), 1, arquivo) == 1); i++)
    {
        if(busca == registro.num)
        {
            printf("id encontrado!\n");
            printf("Numero: %d\n", registro.num);
            printf("Nome: %s\n", registro.nome);
            return 0;
        }
    }

    printf("id nao encontrado!");

    return 0;
}