//Implemente uma fun ̧c ̃ao recursiva para resolver o problema da Torre de
//Hanoi.

#include <stdio.h>

void torre_hanoi(int num, char inicio, char aux, char destino)
{
    int cont = 0;

    //caso base, onde numero de discos é 1
    if(num == 1)
    {
        return;
    }

    torre_hanoi(num - 1,  inicio, destino, aux);

    printf("%d Mover disco %d do poste %c para o poste %c\n", cont, num, inicio, destino);
    cont++;

    torre_hanoi(num - 1, aux, inicio, destino);

}

int main ()
{
    int discos;

    printf("Digite o numero de discos: ");
    scanf("%d", &discos);

    torre_hanoi(discos, '1', '2', '3');

    return 0;
}