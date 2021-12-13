#include <stdio.h>

int main () {

    float usd ;
    float eur;
    printf("introduza o valor em euros");
    scanf("%f",&eur);
    usd = eur/0.85;
    printf("%f",usd);
    return 0 ;
}