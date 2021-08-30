#include <stdio.h>

int main() {
   int n1, n2,n3;
   scanf("%i %i %i", &n1, &n2, &n3);
   int nx = n2+n3;//referente n1
   int ny = n1+n3;//referente n2
   int nz = n2+n1;//referente n1
  if(n1<nx && n2<ny && n3<nz){
    if(n1 == n2 && n2 == n3){
      printf("TRIANGULO EQUILATERO");
    }
    else if(n1 == n2 || n2 == n3){
      printf("TRIANGULO ISOSCELES");
    }
    else{
      printf("TRIANGULO ESCALENO");
    }
  }

}