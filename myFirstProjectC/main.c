#include <stdio.h>
#include <stdlib.h>

int main () {
   char str1[20], str2[30];

   printf("Qual é o seu nome ? ");
   scanf("%s", str1);

   printf("Qual é o seu sobrenome: ");
   scanf("%s", str2);
   printf("\n");

   printf("Seja bem vindo %s, %s !\n", str1, str2);

   return(0);
}
