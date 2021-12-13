#include <stdio.h>

int main()
{
   int num, max;
   max=0 ;
    do
    {
        printf("Insira um número:");~
        scanf("%d",&num);
        if (num>max)
        {
            max = num;
        }
    } while (num != 0 );
    printf("O numero máximo da sucessao é %d\n",max);
    
}