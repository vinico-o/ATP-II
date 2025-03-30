//Escreva uma fun ̧c ̃ao recursiva para encontrar o n ́umero de ocorrˆencias de
//um elemento em um array.

#include <stdio.h>
#define TAMANHO 6

int conta_numero(int array[], int busca, int pos)
{
    int cont = 0;

    //garante que chegue apenas até o final do array
    if(array[pos] != '\0')
    {
        //verifica se o numero de busca é igual ao elemento do vetor
        if(array[pos] == busca)
        {      
            //caso seja, aumentamos um ao contador
            cont++;
            return cont + conta_numero(array, busca, pos + 1);//retornamos a próxima posição do vetor
        }
        else
        {
            //não acrescemos nada ao contador
            return cont + conta_numero(array, busca, pos + 1);//retornamos a próxima posição do vetor
        }
    }

    return cont;//retornamos o resultado final do contador
}

int main()
{
    //inicialização das variáveis
    int vetor[TAMANHO] = {1, 2, 3, 3, 3, 3};
    int chave = 3;
    int contador;

    contador = conta_numero(vetor, chave, 0);
    printf("Qntd de numeros %d: %d", chave, contador);

    return 0;
}