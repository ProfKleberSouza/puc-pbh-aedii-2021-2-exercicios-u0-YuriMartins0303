#include <stdio.h>

int main() {
  int v[100];
  int n;//tamnho de n
  int maior=0;
  int menor;

  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d", &v[i]);
  }

   for(int i = 0; i < n; i++){
      if(menor > v[i]){
        menor = v[i];
      }
      if(maior < v[i]){
        maior = v[i];
      }

   
  }
printf("\nMENOR = %i",menor);
printf("\nMAIOR = %i",maior);

}