//Implemente uma fun ̧c ̃ao recursiva para calcular a soma dos primeiros N
//n ́umeros naturais.

#include <stdio.h>

int funcao_somatorio (int num_n)
{

    if(num_n == 1)//caso base
    {
        return 1;
    }
    else
    {
        return num_n + funcao_somatorio(num_n - 1);//retorna numero + somatorio de seu antecessor
    }
}

int main ()
{

    int numero_n;
    int somatorio;


    //leitura do numero n
    printf("Digite o numero n (ate onde sera somado): ");
    scanf("%d",&numero_n);

    //somatorio recebe a funcao de somatorio
    somatorio = funcao_somatorio(numero_n);


    //saida
    printf("somatorio ate n = %d", somatorio);


    return 0;
}