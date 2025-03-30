//Escreva um programa em C que leia 8 caracteres e verifique
//quantos são vogais.

#include <stdio.h>

int main()
{
    char letra[8];
    int cont_vogais;
    
    for(int i = 0; i < 8; i++){
        printf("Digite um caractere: ");
        scanf("%c",&letra[i]);
        getchar();
        
        if(letra[i] == 'a' || letra[i] == 'e' || letra[i] == 'i' || letra[i] == 'o' || letra[i] == 'u'){
            cont_vogais++;
        }
        
    }
    
    printf("Dentre os caracteres lidos, %d são vogais\n", cont_vogais);

    return 0;
}