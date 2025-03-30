//Crie uma fun ̧c ̃ao recursiva para encontrar o maior divisor comum de um
//array de n ́umeros.

#include <stdio.h>

#define TAMANHO 10

int funcao_menor (int vetor[], int tamanho, int menor)
{
    //se chegarmos ao inicio, retorna "menor"
    if(tamanho == 0)
    {
        return menor;
    }
    //verifica se o numero do vetor é menor que "menor" e efetua a troca
    if(menor > vetor[tamanho - 1])
    {
        menor = vetor[tamanho - 1];
    } 
    
    //volta um elemento do vetor para verificar
    return funcao_menor(vetor, tamanho - 1, menor);
    
}

int funcao_MDC(int num[], int divisor)
{
    //se o divisor chegar a 1, o mdc do vetor é 1
    if(divisor == 1)
    {
        return 1;
    }
    
    //percorrendo o vetor
    for(int i = 0; i < TAMANHO; i++)
    {
        //se algun numero nao vor deivisivel pelo divisor, reduziremos 1 ao divisor
        if(num[i] % divisor != 0)
        {
            return funcao_MDC(num, divisor - 1);
        }
    }

    //ao fim do processo, retorna o divisor
    return divisor;

}

int main()
{
    //inicializaçao das variáveis
    int numero[TAMANHO];
    int minimo, mdc;

    //leitura do vetor
    for(int i = 0; i < TAMANHO; i++)
    {
        printf("Digite o %d° numero do vetor: ", i + 1);
        scanf("%d", &numero[i]);
    }

    //minimo recebe o primeiro numero do vetor, evitando conter lixo
    minimo = numero[0];

    //realiza as funções, encontrando o menor numero e o mdc
    minimo = funcao_menor(numero, TAMANHO, minimo);
    mdc = funcao_MDC(numero, minimo);

    printf("MDC do vetor: %d\n", mdc);

    return 0;
}