/*Utilize a declara ̧c ̃ao de tipos (typedef) para simplificar a defini ̧c ̃ao de uma es-
trutura para armazenar as informa ̧c ̃oes de um carro (marca, modelo, ano) e
imprima seus valores.*/

#include <stdio.h>

typedef struct
{
    char marca[100];
    char modelo[100];
    int ano;
} Carro;

int main ()
{
    Carro inf_carro;

    printf("Digite a marca do carro: ");
    gets(inf_carro.marca);
    printf("Digite o modelo do carro: ");
    gets(inf_carro.modelo);
    printf("Digite o ano do carro: ");
    scanf("%d", &inf_carro.ano);

    printf("Marca: %s\n", inf_carro.marca);
    printf("Modelo: %s\n", inf_carro.modelo);
    printf("Ano: %d\n", inf_carro.ano);    

    return 0;
}