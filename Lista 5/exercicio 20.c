//Desenvolva uma fun ̧c ̃ao recursiva para encontrar a raiz quadrada de um
//n ́umero inteiro utilizando o m ́etodo de busca bin ́aria.

#include <stdio.h>
#include <math.h>

int raiz_numero (int array[], int inicio, int fim, int busca)
{
    if(inicio <= fim)
    {
        //define o meio da matriz, independente de onde seja o inicio
        int meio = inicio + (fim - inicio) / 2;

        //se o numero ao quadrado foi igual ao numero de busca, retornamos ele
        if(array[meio] * array[meio] == busca)
        {
            return array[meio];
        }
        //se o numero ao quadrado for maior, o fim passa a ser o meio
        if(array[meio] * array[meio] > busca)
        {
            return raiz_numero(array, inicio, meio - 1, busca);
        }
        //se o numero ao quadrado for menor, ignoramos o vetor (do meio para tras)
        if(array[meio] * array[meio] < busca)
        {
            return raiz_numero(array, meio + 1, fim, busca);
        }

        //retorna -1, se a raiz nao for encontrada
        return - 1;

    }

}

int main()
{
    //inicialização das variáveis
    int numero = 16;
    int vetor[numero];
    int resultado;

    //define o vetor até n
    for(int i = 1; i < numero; i++)
    {
        vetor[i] = i;
    }

    //chamada da função
    resultado = raiz_numero(vetor, 0, numero, numero);

    printf("Resultado: %d", resultado);

    return 0;
}