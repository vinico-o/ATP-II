//Desenvolva uma fun ̧c ̃ao recursiva para calcular a sequˆencia de Ackermann.

#include <stdio.h>

int sequencia_ackermann(int m, int n)
{
    if(m == 0)
    {
        return(n + 1);
    }
    else if(m > 0 && n == 0)
    {
        return sequencia_ackermann(m - 1, 1);
    }
    else
    {
        return sequencia_ackermann(m - 1, sequencia_ackermann(m, n - 1));
    }
}

int main ()
{
    int num1, num2;

    printf("Digite o valor de m: ");
    scanf("%d", &num1);

    printf("Digite o valor de n: ");
    scanf("%d", &num2);

    printf("Numero final da sequencia: %d", sequencia_ackermann(num1, num2));

    return 0;
}