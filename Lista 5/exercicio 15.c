//Crie uma fun ̧c ̃ao recursiva para gerar todos os subconjuntos de um con-
//junto dado.

#include <stdio.h>

#define TAMANHO 3

void funcao_subconjuntos(int conjunto[], int subconjunto[], int tamanho, int tamanho_sub, int posicao)
{
    //imprime os elementos do conjunto atual
    if(posicao == tamanho)
    {
        printf("{");

        for(int i = 0; i < tamanho_sub; i++)
        {
            printf("%d", subconjunto[i]);
        }

        printf("}\n");
        return;
    }

    //chama a funçao adicionando um elemento
    subconjunto[tamanho_sub] = conjunto[posicao];
    funcao_subconjuntos(conjunto, subconjunto, TAMANHO, tamanho_sub + 1, posicao + 1);

    //chama a funçao excluindo um elemento
    funcao_subconjuntos(conjunto, subconjunto, TAMANHO, tamanho_sub, posicao + 1);

}

int main()
{
    int conjunto[TAMANHO] = {1, 2, 3};
    int subconjunto[TAMANHO];

    funcao_subconjuntos(conjunto, subconjunto, TAMANHO, 0, 0);
    
    return 0;
}