/*Declare e inicialize uma uni ̃ao para armazenar um valor double ou um valor
char e imprima seus valores.*/

#include <stdio.h>

union valor
{
    double d;
    char c;
};

int main() {
    
    union valor v;
    v.d = 3.14159;

    printf("Valor double: %.2f\n", v.d);
    
    v.c = 'a';

    printf("Valor char: %c\n", v.c);

    return 0;
}