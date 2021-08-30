#include <stdio.h>

int main() {
   int n1;
   scanf("%i", &n1);
   if(n1 %2 == 0 && n1>0){
     printf("NUMERO PAR POSITIVO");
   }
   if(n1 %2 == 1 && n1>0){
     printf("NUMERO IMPAR POSITIVO");
   }
   else if(n1<0 && n1 %2 == 0){
     printf("NUMERO PAR NEGATIVO");
     }
   else if(n1<0 && n1 %2 == 1){
     printf("NUMERO IMPAR NEGATIVO");
    }
   if(n1 == 0)
      printf("NUMERO NEUTRO");

   return 0;
}