#include <stdio.h>
#include <math.h>

int main() {
    float num, sqr;

    printf("Indique um número inteiro\n");
    scanf("%f",&num);
    if(num<0 )
    {
        printf("O numero inserido é negativo\n");
    }
    else
    {
        sqr = sqrt(num);
        printf("A raiz quadrade de %.2f é %.2f \n", num,sqr);
 
    }
    

}