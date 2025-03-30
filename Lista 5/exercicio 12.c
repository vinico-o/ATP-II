//Desenvolva uma fun ̧c ̃ao recursiva para imprimir todos os n ́umeros primos
//at ́e N.

#include <stdio.h>

int funcao_eh_primo (int num, int divisor)
{
    if(divisor == 1) //se o divisor chegar ao valor 1, ele sobrou resto em todos os divisores menores que ele
    {                //no caso, é um numero primo
        return 1;
    }
    if(num == 1 || num % divisor == 0)//se nao sobrar resto, o numero nao é primo
    {                                 //ou se numero = 1 (caso base)
        return 0;
    }
    else
    {
        return funcao_eh_primo(num, divisor - 1);//chama a funçao novamente, subtraindo 1 do divisor
    }
}

void funcao_primos(int max, int contador)
{
    //se ccontador chegar no numero maximo, sai da função
    if(contador > max)
    {
        return;
    }
    //verificamos se "contador" é primo, e começamos o sivisor como contador / 2
    if(funcao_eh_primo(contador, contador / 2) == 1)
    {
        //se o número for primo, ele é impresso
        printf("%d ", contador);
    }

    //a função é chamada novamente acrescentando 1 ao contaodor
    funcao_primos(max, contador + 1);
}

int main()
{
    int num_max;
    int cont = 2;

    printf("Digite o numero maximo: ");
    scanf("%d",&num_max);

    funcao_primos(num_max, cont);

    return 0;
}
