#include <stdio.h>

int main()
    {
   int num, max,i;
   max=0 ;
   i = 0;
    do
    {
        printf("Insira um número:");
        scanf("%d",&num);
        if (num>max)
        {
            max = num;
        }
        i++;
    } while (num != 0 );
    i--;
    printf("O numero máximo da sucessao é %d na posição %dº\n",max,i);
    
}
