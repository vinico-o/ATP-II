/*Escreva um programa em C para copiar o conte ́udo de um arquivo bin ́ario
para outro arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char c;
    FILE *arquivo;
    arquivo = fopen("exercicio 10.bin", "rb");
    FILE *arquivo_copia;
    arquivo_copia = fopen("exercicio 10_copia.bin", "wb");

    while(fread(&c, sizeof(char), 1, arquivo) == 1)
    {
        fwrite(&c, sizeof(char), 1, arquivo_copia);
    }

    fclose(arquivo);
    fclose(arquivo_copia);

    return 0;
}