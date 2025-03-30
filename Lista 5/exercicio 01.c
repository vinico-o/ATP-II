//Escreva uma fun ̧c ̃ao recursiva para calcular o fatorial de um n ́umero.

#include <stdio.h>

int funcao_fatorial (int num)
{
    if(num == 0) //caso base 0! = 1
    {
        return 1;
    } 
    else 
    {
        return num * funcao_fatorial(num - 1);// definicao de fatorial n! = n*(n-1)!
    }
}

int main ()
{

    int numero;
    int fatorial;

    //leitura do numero
    printf("Digite um numero: ");
    scanf("%d", &numero);

    //fatorial recebe o valor final da funcao
    fatorial = funcao_fatorial(numero);

    printf("fatorial de %d = %d\n", numero, fatorial);

    return 0;
}