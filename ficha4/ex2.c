#include <stdio.h> 
#include <math.h>
int main(){
    float a,b,c,x1,x2,r1,r2;
    printf("Insira o valor de a,b e c ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    r1=b*b-4*a*c;
    r2= sqrtf(r1);

    x1 = (b + r2)/(2*a);
    x2=  (b - r2)/(2*a);

    printf(" %f ; %f\n",x1 ,x2);

}