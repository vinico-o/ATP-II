//Implemente uma fun ̧c ̃ao recursiva para imprimir os elementos de um array
//na ordem inversa.

#include <stdio.h>

void funcao_inverter (int array[], int tamanho)
{
    
    if(tamanho == 0)//caso chegarmos ao inicio do vetor
    {
        return;//sairemos da funcao
    }

    printf("%d ", array[tamanho - 1]);//imprime o ultimo elemento do array (posição tamanho - 1)
    funcao_inverter(array, tamanho - 1);//chama a função decrescendo em 1 o tamanho (para imprimir o antecessor)

}

int main()
{
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Vetor padrão: ");
    //impressão do vetor padrão
    for(int i = 0; i < 10; i++)
    {
        printf("%d ",vetor[i]);
    }

    printf("\nVetor invertido: ");
    funcao_inverter(vetor, 10);//chamando a função

    return 0;
}