#include <stdio.h>
int main(){
 int ano;
 printf("Digite um ano: ");
 scanf("%i", &ano);

 if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
    printf("O ano %i eh bissexto.\n", ano);
 } else {
    printf("O ano %i nao eh bissexto.\n", ano);
 }




    return 0;
}