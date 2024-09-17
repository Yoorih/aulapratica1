#include <stdio.h>
int main() {
  int numero;
  int incremento = numero;
  int decremento = numero;


  printf("Entre com um numero inteiro: ");
   int deu_certo = scanf("%i", &numero);

  printf("O pré-incremento do número %i é %i\n", numero, ++incremento);
  printf("O pré-decremento do número %i é %i\n", numero, --decremento);

  
  
  
  
  return 0; 
}