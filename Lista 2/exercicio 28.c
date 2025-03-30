//Escreva um programa em C que implemente a busca bin ́aria em
//uma matriz ordenada 4x4.

#include <stdio.h>

#define TAMANHO 4

int busca_binaria(int array[], int inicio, int fim, int busca)
{
    if(inicio <= fim)
    {
        //define o meio da matriz, independente de onde seja o inicio
        int meio = inicio + (fim - inicio) / 2;

        //se o numero ao quadrado foi igual ao numero de busca, retornamos ele
        if(array[meio] == busca)
        {
            return meio;
        }
        //se o numero ao quadrado for maior, o fim passa a ser o meio
        if(array[meio] > busca)
        {
            return busca_binaria(array, inicio, meio - 1, busca);
        }
        //se o numero ao quadrado for menor, ignoramos o vetor (do meio para tras)
        if(array[meio] < busca)
        {
            return busca_binaria(array, meio + 1, fim, busca);
        }

    }

    //retorna -1, se a raiz nao for encontrada
    return - 1;

}

int main()
{
    int chave, cont = 0, resultado;
    int vetor[TAMANHO * TAMANHO];
    int matriz[TAMANHO][TAMANHO] = 
    {
        {2, 4, 6, 8}, 
        {10, 12, 14, 16}, 
        {18, 20, 22, 24}, 
        {26, 28, 30, 32}
    };

    //número buscado pelo usuário
    printf("Digite o numero de busca: ");
    scanf("%d",&chave);

    //cria um vetor da matriz, deixando ideal para a abusca binária
    for(int i = 0; i < TAMANHO; i++)
    {
        for(int j = 0; j < TAMANHO; j++)
        {
            vetor[cont] = matriz[i][j];
            cont++;
        }
    }
    
    //aplicação da função de busca binária
    resultado = busca_binaria(vetor, 0, TAMANHO * TAMANHO - 1, chave);

    //se o número for encontrado impime ele e sua posição na matriz
    if(resultado != -1)
    {
        int linha = resultado / TAMANHO;
        int coluna = resultado % TAMANHO;

        printf("Numero %d encontrado em matriz[%d][%d]\n", chave, linha, coluna);
    }
    else
    {
        printf("Numero nao encontrado\n");
    }
    

    return 0;
}