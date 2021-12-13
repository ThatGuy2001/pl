#include <stdio.h>

int main() {
    int num1,num2,i,r1,r2,mult;

    printf("Quais os dois números?");
    scanf("%d %d",&num1,&num2);


    for(i=num1*num2;i>=num1 && i>=num2;i--)
    {
      r1 = i%num1;
      r2 = i%num2;   
      if(r1==0 && r2==0)
      {
        mult = i;
      }
    }
    printf("O menor multiplo entre eles é %d\n", mult);



}