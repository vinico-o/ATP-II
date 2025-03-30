//Crie uma fun ̧c ̃ao recursiva para calcular a potˆencia de um n ́umero.

#include <stdio.h>

int funcao_potencia(int num, int contador)
{
    if(contador == 1)//nesse caso, a potencia funciona como um contador regressivo, se chegar a 1 retornaremos o resultado
    {
        return num;
    }
    if(contador == 0)
    {
        return 1;
    }

    return num * funcao_potencia(num, contador - 1);//num é igual a sua propria multiplicação, e decrescemos 1 do contador
}

int main()
{
    int numero, potencia;

    //leitura das variaveis
    printf("Digite o numero e sua potencia: ");
    scanf("%d %d", &numero, &potencia);

    //impressão do resultado
    printf("%d^%d = %d", numero, potencia, funcao_potencia(numero, potencia));

    return 0;
}