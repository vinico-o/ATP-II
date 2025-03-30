//Escreva um programa em C que leia uma string e substitua
//todas as ocorrˆencias de um caractere por outro.

#include <stdio.h>

int main()
{
    
    char string[20];
    char char_buscado, troca;
    
    printf("Digite uma string: ");
    gets(string);
    
    printf("Digite um caractere da string a ser trocado: ");
    scanf("%c",&char_buscado);
    
    getchar();
    
    printf("Digite o caractere que vai substituir: ");
    scanf("%c",&troca);
    
    for(int i = 0; string[i] != '\0'; i++)
    {
        if(string[i] == char_buscado)
        {
            string[i] = troca;
        }
    }
    
    printf("Nova string gerada: %s\n", string);
    
    return 0;
}