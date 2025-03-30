//Desenvolva uma fun ̧c ̃ao recursiva para calcular o MDC (M ́aximo Divisor
//Comum) de dois n ́umeros.

#include <stdio.h>

int funcao_MDC(int num[], int divisor)
{
    if(num[0] % divisor == 0 && num[1] % divisor == 0)
    {
        return divisor;
    } 
    else
    {
        return funcao_MDC(num, divisor - 1);
    }

}

int main()
{
    int numero[2];
    int menor;

    printf("Digite dois numeros para calcular o MDC: ");
    scanf("%d %d", &numero[0], &numero[1]);

    if(numero[1] <= numero[0])
    {
        menor = numero[1];
    }
    else
    {
        menor = numero[0];
    }

    printf("MDC entre %d e %d: %d", numero[0], numero[1], funcao_MDC(numero, menor));

    return 0;
}