#include <stdio.h>
int main(){
  //Entrada
  int numero1;
  int numero2;

  printf("Entre com um numero: ");
   int deu_certo = scanf("%i", &numero1);

  printf("Entre com outro numero: ");
  deu_certo = scanf("%i", &numero2);
  
  //Processamento
  int igual = numero1 == numero2;  // uma barra de = armazena valores, duas barras == demonstra se sao iguais
  int diferente = numero1 != numero2; // != indica diferença nos valores
  int menor = numero1 < numero2; // < ta na cara
  int menor_igual = numero1 <= numero2; // <= denovo na cara rei
  int maior = numero1 > numero2; // > ... 
  int maior_igual = numero1 >= numero2; // >= maior igual

  //Saida

  printf("%i é igual a %i? %i\n", numero1, numero2, igual);
  printf("%i é diferente a %i? %i\n", numero1, numero2, diferente);
  printf("%i é menor a %i? %i\n", numero1, numero2, menor);
  printf("%i é menor ou igual a %i? %i\n", numero1, numero2, menor_igual);
  printf("%i é maior a %i? %i\n", numero1, numero2, maior);
  printf("%i é maior ou igual a %i? %i\n", numero1, numero2, maior_igual);
  
  return 0;
  
}