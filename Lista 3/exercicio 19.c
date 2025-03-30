/*Crie uma fun ̧c ̃ao que recebe uma estrutura de carro (marca, modelo, ano) como
parˆametro e imprima seus valores.*/

#include <stdio.h>

struct info_carro
{
    char marca[30];
    char modelo[30];
    int ano;
};

void imprimir_carro (struct info_carro carro)
{
    printf("Marca: %s\n", carro.marca);
    printf("Modelo: %s\n", carro.modelo);
    printf("Ano: %d\n", carro.ano);
}

int main ()
{
    struct info_carro car;

    printf("Digite a marca do carro: ");
    gets(car.marca);
    printf("Digite o modelo do carro: ");
    gets(car.modelo);
    printf("Digite o ano do carro: ");
    scanf("%d", &car.ano);

    imprimir_carro(car);

    return 0;
}