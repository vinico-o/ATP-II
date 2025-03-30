/*Escreva um programa em C para deletar um registro espec ́ıfico de um
arquivo bin ́ario.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 4

//definindo uma estrutura (Registro)
typedef struct
{
    char marca[20];
    char modelo[20];
    int ano;
} Carro;

void DeletarRegistro(FILE *arquivo, char modelo[]);

int main()
{
    char busca[20];

    //criação dos valores dos registros
    Carro carro[NUM] =
    {
        {"porsche", "panamera", 2024},
        {"dodge", "charger", 1968},
        {"chevrolet", "camaro", 1968},
        {"ferrari", "la ferrari", 2013}
    };

    //criação do arquivo
    FILE *arquivo;
    arquivo = fopen("exercicio 16.bin", "wb");

    if(arquivo == NULL)
    {
        printf("Erro ao abrir arquivo1!");

        return 1;
    }

    //escrita dos registros no arquivo
    for(int i = 0; i < NUM; i++)
    {
        fwrite(&carro[i], sizeof(Carro), 1, arquivo);
    }
    
    //fecha o arquivo, para abrir no modo de leitura, o qual sera utilizado na funcao
    fclose(arquivo); 
    arquivo = fopen("exercicio 16.bin", "rb");

    if(arquivo == NULL)
    {
        printf("Erro ao abrir arquivo2!");

        return 1;
    }

    printf("Digite o modelo que deve ser apagado: ");
    gets(busca);

    DeletarRegistro(arquivo, busca);

    printf("Registro atualizado!\n");

    fclose(arquivo);

    return 0;
}

void DeletarRegistro(FILE *arquivo, char modelo[])
{
    Carro carro;

    //cria um arquivo temporario
    FILE *temp;
    temp = fopen("temp.bin", "wb");

    if(temp == NULL)
    {
        printf("Erro ao abrir arquivo3!");
        fclose(temp);
        return;
    }

    //enquanto os registros sao lidos, escreve em temp os registros que são diferentes do buscado
    while(fread(&carro, sizeof(Carro), 1, arquivo) == 1)
    {
        if(strcmp(modelo, carro.modelo) != 0)
        {
            fwrite(&carro, sizeof(Carro), 1, temp);
        }
    }

    //fecha os dois arquivos
    fclose(temp);
    fclose(arquivo);

    //remove o arquivo original e altera o nome do temporario
    remove("exercicio 16.bin");
    rename("temp.bin", "exercicio 16.bin");
}