#include <stdio.h>//biblioteca entrada e saida

int main() {
   printf("um texto sempre entre aspas duplas\n");//imprime um texto
   printf("%i\n",10);//%i para valores inteiros e /n para quebra de linha
   printf("%i %i\n", 11,22);//multiplos numeros
   printf("%5i\n", 110);//5 espacos para imprimir
   printf("%05i\n",1);//coloca zeros a esquerda
  
   printf("%f\n",10.5); //imprime numero decimal "%f"
   printf("%10.2f\n", 10.5888); //imprime numero decimal com duas casas decimais "%.2f"
   printf("%10.2f\n", 10155.5888);

   printf("%c\n", 'A');//imprime um caracter aspas simples 'A' "%c")
   printf("%c\n", 68);

  //imprime uma string
  printf("%s\n", "Bom dia!");
  printf("%30s!\n", "Quero cafe");//espaco para o simbolo aparecer %30s!
  printf("%-30s!\n", "Quero cafe");//espaco para o simbolo aparecer %-30s!
  
  return 0;
}