#include <stdio.h>

int main()
{
    char vetor[5];
    
    for (int i = 0; i < 5; i++){
        vetor[i] = 97 + i;
    }
    
    for(int i = 0; i < 5; i++){
        printf("letra no vetor %d: %c\n", i, vetor[i]);
    }

    return 0;
}