#include <stdio.h>

int main() {
    int num1,num2,i,r1,r2,div;

    printf("Quais os dois números?");
    scanf("%d %d",&num1,&num2);

    for(i=1;i<=num1 && i<=num2;i++)
    {
      r1 = num1%i;
      r2 = num2%i;   
      if(r1==0 && r2==0)
      {
        div = i;
      }
    }
    printf("O maior divisor entre eles é %d\n", div);



}