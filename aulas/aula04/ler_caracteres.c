#include <stdio.h>
int main(){
  char tecla = '\0'; //caracter nulo
  
  printf("Digite uma tecla: ");
  int deu_certo = scanf("%c", &tecla);

  printf("Você digitou: %c\n", tecla);
  getchar();

  
  printf("Digite outra tecla: ");
   deu_certo = scanf("%c", &tecla);
  printf("Você digitou: %c\n", tecla);
   getchar();//limpa o \n

  
  char nome[31];
  printf("Entre com um nome: ");
  deu_certo = scanf("%[^\n]s", nome);
  printf("Voce digitou: %s\n", nome);
  return 0;
}