#include <stdio.h>
 int main(){
   printf("o tipo 'short int' na memoria = %lu byte(s)\n", sizeof(short int));
    printf("o tipo 'long int' na memoria = %lu byte(s)\n", sizeof(long int));
    printf("o tipo 'long double' na memoria = %lu byte(s)\n", sizeof(long double));
   
   return 0;
 }