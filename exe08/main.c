#include <stdio.h>

int main() {
  int v[100];
  int n;//quantos númeors quiser
  scanf("%d", &n);//maior que zero
  for(int i = 0; i < n; i++){
    scanf("%d", &v[i]);
  }
  for(int i =0; i<n;i++){
    if(v[i]>0){
      printf("POSITIVO\n");
    }
    else if(v[i] == 0){
      printf("\n");
    }
    else
      printf("NEGATIVO\n");
  }
}