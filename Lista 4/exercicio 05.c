/*Escreva um programa em C para concatenar dois arquivos de texto em um
terceiro arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char c;
    FILE *arquivo1, *arquivo2, *arquivo3;
    arquivo1 = fopen("exercicio 5_1.txt", "r");
    arquivo2 = fopen("exercicio 5_2.txt", "r");
    arquivo3 = fopen("exercicio 5_3.txt", "w");

    for(int i = 0; fscanf(arquivo1, "%c", &c) != EOF; i++)
    {
        fprintf(arquivo3, "%c", c);
    }

    for(int i = 0; fscanf(arquivo2, "%c", &c) != EOF; i++)
    {
        fprintf(arquivo3, "%c", c);
    }

    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);

    return 0;
}