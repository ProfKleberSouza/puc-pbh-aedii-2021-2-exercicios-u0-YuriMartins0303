#include <stdio.h>

int main() {
   int T=0, V=0, R=0, D=0, L=0;
   scanf("%i %i %i", &T, &V, &R);
   printf("R = %i\n", R);
   printf("V = %i\n", V);
   printf("T = %i\n", T);
   D = V*T;
   printf("D = %i\n", D);
   L = D/R;
   printf("L = %i\n", L);
   return 0;
}