#include <stdio.h>

int main()
    {
   int num, max,i;
   
    for(i=0, max=0; num !=0;i++)
     {  printf("Insira um número:");
        scanf("%d",&num);
        if (num>max)
        {
            max = num;
        }
     }
    i--;
    printf("O numero máximo da sucessao é %d na posição %dº\n",max,i);
    
}
