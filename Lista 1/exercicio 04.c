#include <stdio.h>

int fibonacci(int num_sequencia) {
  int numero;
  
  if (num_sequencia == 1) {
    return(1);
  }
  
  if (num_sequencia == 2) {
    return(1);
  }
  
  numero = fibonacci(num_sequencia - 1) + fibonacci(num_sequencia - 2);
  return(numero);
}



int main() {
    float vetor[8];
    int i;

    for (i = 1; i <= 8; i++) {
        vetor[i] = fibonacci(i);
        printf("o numero no vetor %d eh: %.2f\n", i - 1, vetor[i]);
    }
  
return(0);
}