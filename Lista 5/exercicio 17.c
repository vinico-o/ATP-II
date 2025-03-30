//Escreva uma fun ̧c ̃ao recursiva para calcular o n ́umero de caminhos poss ́ıveis
//em uma grade NxN.

#include <stdio.h>

#define LARGURA 4
#define ALTURA 4

int caminhos_possiveis(int n, int m)
{
    if(n == 1 || m == 1)
    {
        return 1;
    }
    else
    {
        //gera uma arvore recursiva, com opções de caminhos para direita, ou para baixo
        return caminhos_possiveis(n - 1, m) + caminhos_possiveis(n, m - 1);
    }
}

int main()
{
    int passos;

    passos = caminhos_possiveis(ALTURA, LARGURA);

    printf("Numero de caminhos possiveis: %d", passos);   

    return 0;
}