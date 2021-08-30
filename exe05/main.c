#include <stdio.h>

int main() {
   float n1=0, n2=0, n3=0, n4=0, media = 0;
   scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
   n1 = n1+n2;
   n3 = n3+n4; 
   media = (n1+n3)/2;

  if(media>=6){
    printf("NOTA = %.1f (APROVADO)",media);
  }
  else
    printf("NOTA = %.1f (REPROVADO)",media);
   return 0;
}