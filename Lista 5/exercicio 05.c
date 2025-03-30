//Escreva uma fun ̧c ̃ao recursiva para verificar se um n ́umero  ́e primo.

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
        funcao_eh_primo(num, divisor-1);//chama a funçao novamente, subtraindo 1 do divisor
    }
}

int main ()
{   
    int numero;

    //leitura das variaveis
    printf("Digite um numero para verificar se ele eh primo: ");
    scanf("%d",&numero);
    
    //saida da resposta (1 ou 0), chamando a funcao
    printf("%d", funcao_eh_primo(numero, numero - 1));

    return 0;
}