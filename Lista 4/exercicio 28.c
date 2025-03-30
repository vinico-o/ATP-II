/*Escreva um programa em C para compactar um arquivo bin ́ario aplicando
t ́ecnicas de compress ̃ao simples.*/

#include <stdio.h>

void CompactarArquivo(FILE *arquivo1, FILE *arquivo2);

int main ()
{
    FILE *arquivo;
    arquivo = fopen("exercicio 28.bin", "rb");

    FILE *arquivo_comp;
    arquivo_comp = fopen("exercicio 28_2.bin", "wb");

    if(arquivo == NULL || arquivo_comp == NULL)
    {
        printf("Erro ao abrir arquivo!");
    }

    CompactarArquivo(arquivo, arquivo_comp);

    fclose(arquivo);
    fclose(arquivo_comp);

    return 0;
}

void CompactarArquivo(FILE *arquivo1, FILE *arquivo2)
{
    int cont = 1;
    char atual, anterior;

    fread(&anterior, sizeof(char), 1, arquivo1);

    while(fread(&atual, sizeof(char), 1, arquivo1) == 1)
    {
        if(atual == anterior)
        {
            cont++;
        }
        else 
        {
            fwrite(&cont, sizeof(int), 1, arquivo2);
            fwrite(&atual, sizeof(char), 1, arquivo2);

            anterior = atual;
            cont = 1;
        }
    }

    return;

}