#include <math.h>
#include <stdio.h>

int main() { 
    double c1, c2,cts, h;
    printf("Qual o comprimento do cateto 1:");
    scanf("%lf",&c1);
    printf("\nQual o comprimento do cateto 2:");
    scanf("%lf",&c2);
    cts= c1*c1 + c2*c2;
    h = sqrt(cts); 
    printf("\n A hipotesuna é: %.2lf \n",h);

}


