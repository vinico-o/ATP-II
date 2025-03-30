//Crie uma fun ̧c ̃ao recursiva para calcular o coeficiente binomial C(n, k).

#include <stdio.h>

int funcao_binomial(int n, int k)
{
    if(k == 0 || k == n)
    {
        return 1;
    }
    else
    {
        return (funcao_binomial(n - 1, k - 1) + funcao_binomial(n - 1, k));
    }
}

int main()
{

    int num1, num2;

    printf("Digite o valor de n: ");
    scanf("%d", &num1);

    printf("Digite o valor de k: ");
    scanf("%d", &num2);

    printf("Resultado do binomio: %d", funcao_binomial(num1, num2));

    return 0;
}