#include <stdio.h>
#include <limits.h>
#include <float.h>
 int main() {
   printf("tamanho do char na memoria = %lu byte(s)\n", sizeof(char));
   printf("tamanho do int na memoria = %lu byte(s)\n", sizeof(int));
   printf("tamanho do float na memoria = %lu byte(s)\n", sizeof(float));
   printf("tamanho do double na memoria = %lu byte(s)\n", sizeof(double));
   printf("tamanho do void na memoria = %lu byte(s)\n", sizeof(void));
   printf("\n");
   printf("a faixa de valores do char: de %i a %i\n", CHAR_MIN, CHAR_MAX);
   printf("a faixa de valores do int: de %i a %i\n",INT_MIN, INT_MAX);
   printf("a faixa de valores do float: de %E a %E\n", FLT_MIN, FLT_MAX);
   printf("a faixa de valores do double: de %E a %E\n", DBL_MIN, DBL_MAX);
   
   
   return 0;
     
 }