#include <stdio.h>

int main() {
    int a, b, c, menor, maior;

    scanf("%i %i %i", &a, &b, &c);

    if(a < b){
        if(a < c)
            menor = a;
        else
            menor = c;
    }
    else{
        if(b < c)
            menor = b;
        else
            menor = c;
    }

    if(a > b){
        if(a > c)
            maior = a;
        else
            maior = c;
    }
    else{
        if(b > c)
            maior = b;
        else
            maior = c;
    }

    printf("\nMENOR = %i",menor);
    printf("\nMAIOR = %i",maior);
}