#include <stdio.h>
#include <math.h>

int main(){
    double x,res,i,total;
    printf("Qual o valor de x?");
    scanf("%lf",&x);
    total=x;
     
     for (i = 3;i<=19; i= i+2)
     {
        res=total-((1/i)*pow(x,i));
        total=res;
     }
     printf("resultado: %.2lf\n",total);
}