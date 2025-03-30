/*Escreva um programa em C para armazenar informa ̧c ̃oes de uma lista de
contatos em um arquivo de texto e implementar fun ̧c ̃oes para adicionar,
excluir e buscar contatos.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char nome[20];
    char numero[20];
} Telefone;

void AdicionarContato (FILE *arquivo);
void ExcluirContato (FILE *arquivo);
void BuscarContato (FILE *arquivo);
void ExibirLista (FILE *arquivo);

int main ()
{
    int selecao;

    FILE *arquivo;
    arquivo = fopen("exercicio 38.txt", "r+");

    if(arquivo == NULL)
    {
        printf("Erro ao abrir arquivo!");

        return 1;
    }

    do
    {
        printf("\nMENU\n");
        printf("1- Adicionar contato\n");
        printf("2- Excluir contato\n");
        printf("3- Buscar contato\n");
        printf("4- Exibir Lista de Contatos\n");
        printf("5- Sair\n");
        scanf("%d", &selecao);
        getchar();

        switch (selecao)
        {
            case 1:
                AdicionarContato(arquivo);
                break;
            
            case 2:
                ExcluirContato(arquivo);
                break;
            
            case 3:
                BuscarContato(arquivo);
                break;

            case 4:
                ExibirLista(arquivo);
                break;
        }
    } while (selecao != 5);
    

    fclose(arquivo);

    return 0;
}

void AdicionarContato(FILE *arquivo)
{
    Telefone telefone;

    printf("Digite o Nome: ");
    gets(telefone.nome);

    printf("Digite o numero: ");
    gets(telefone.numero);
    fprintf(arquivo, "%s %s\n", telefone.nome, telefone.numero);

}

void BuscarContato(FILE *arquivo)
{
    char busca[20];
    Telefone telefone;

    printf("Digite o nome ou o numero para buscar: ");
    gets(busca);

    rewind(arquivo);
    while(fscanf(arquivo, "%s %s", telefone.nome, telefone.numero) != EOF)
    {
        if(strcmp(busca, telefone.nome) == 0 || strcmp(busca, telefone.numero) == 0)
        {
            printf("Registro encontrado!\n");
            printf("Nome: %s\nNumero: %s\n", telefone.nome, telefone.numero);

            return;
        }
    }

    printf("Registro nao encontrado!\n");

    return;
}

void ExcluirContato(FILE *arquivo)
{
    char busca[20];
    Telefone telefone;

    FILE *temp;
    temp = fopen("temp.txt", "w");

    if(temp == NULL)
    {
        printf("Erro ao abrir arquivo!");

        return;
    }

    printf("Digite o nome ou o numero para apagar: ");
    gets(busca);

    rewind(arquivo);
    while(fscanf(arquivo, "%s %s", telefone.nome, telefone.numero) != EOF)
    {
        if(strcmp(busca, telefone.nome) != 0)
        {
            fprintf(temp, "%s %s\n", telefone.nome, telefone.numero);
        }
    }

    fclose(arquivo);
    fclose(temp);

    remove("exercicio 37.txt");
    rename("temp.txt", "exercicio 37.txt");
}

void ExibirLista (FILE *arquivo)
{
    int cont = 1;
    Telefone telefone;

    printf("Lista de contatos\n\n");
    
    while(fscanf(arquivo, "%s %s", telefone.nome, telefone.numero) != EOF)
    {
        printf("Contato %d\n", cont);
        printf("Nome: %s\n", telefone.nome);
        printf("Numero: %s\n\n", telefone.numero);
        
        cont++;
    }

}