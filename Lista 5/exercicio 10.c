//Implemente uma fun ̧c ̃ao recursiva para calcular a soma dos d ́ıgitos de um
//n ́umero inteiro.

#include <stdio.h>

int funcao_soma_digitos(int num)
{
    //caso base
    if(num == 0)
    {
        return 0;
    }
    
    //num % 10 remove o ultimo digito e soma com a funcao (sem aquele digito)
    return (num % 10) + funcao_soma_digitos(num / 10);
}

int main()
{
    int numero;

    //leitura das variaveis
    printf("Digite um numero: ");
    scanf("%d",&numero);

    printf("Soma dos Digitos: %d", funcao_soma_digitos(numero));

    return 0;
}