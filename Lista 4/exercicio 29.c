/*Escreva um programa em C para criar um arquivo de texto com conte ́udo
criptografado e depois descriptografar.*/

#include <stdio.h>

int main ()
{
    int chave;
    char c;

    FILE *arquivo;
    arquivo = fopen("exercicio 29.txt", "r");

    FILE *arquivo_descrip;
    arquivo_descrip = fopen("exercicio 29_2.txt", "w");

    if(arquivo == NULL || arquivo_descrip == NULL)
    {
        printf("Arquivos nao lidos!");
        return 1;
    }

    //nesse exercicio utilizaremos a cifra de cesar
    printf("Digite a chave de descriptografacao: ");
    scanf("%d", &chave);

    while(fscanf(arquivo, "%c", &c) != EOF)
    {
        c -= chave;
        fprintf(arquivo_descrip, "%c", c);
    }

    fclose(arquivo);
    fclose(arquivo_descrip);
}