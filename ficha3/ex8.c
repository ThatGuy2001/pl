#include <stdio.h>

int main() {
    double num,i,soma,n, x;
    printf("Qual o valor? ");
    scanf("%lf",&num);  
    soma = 1;
    if (num >= 0)
    {
     for(n = 1;n <= num;n++)
     {
       x=n;
        for ( i =x-1; i > 0; i--)
        {
            x= x*i;
            
        }
        soma= soma + (1/x);
     }
    }
    printf("O somatorio é %.9lf \n",soma);
}