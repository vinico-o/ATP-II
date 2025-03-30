//Desenvolva uma fun ̧c ̃ao recursiva para calcular a sequˆencia de Fibonacci
//at ́e o en ́esimo termo.

#include <stdio.h>

int funcao_fibonacci (int num_n)
{
    if(num_n == 0)
    {
        return 0;
    }
    else if(num_n == 1)
    {
        return 1;
    }
    else
    {
        return (funcao_fibonacci(num_n - 1) + funcao_fibonacci(num_n - 2));
    }

}

int main()
{
    int numero_n;
    int resposta;

    printf("Digite qual o numero da sequencia: ");
    scanf("%d", &numero_n);

    resposta = funcao_fibonacci(numero_n);

    printf("Fibonacci do %d° numero é: %d", numero_n, resposta);

    return 0;
}