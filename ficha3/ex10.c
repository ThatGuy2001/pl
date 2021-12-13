#include <stdio.h>

int main(){
    int a, b,i,r,r1;
    printf("Escreva o valor de a e b:");
    scanf("%d %d",&a ,&b);
    for ( i = 1; i <= 50; i++)
    {
        r = i%a;
        r1 = i%b;
        if (r==0 && r1==0)
        {
            printf("%d : %d %d\n",i,a,b);
        }
        else if (r==0 && r1 != 0)
        {
            printf("%d : %d \n",i,a);
        
        }
        else if (r1==0 && r != 0)
        {
            printf("%d : %d \n",i,b);
        }

    }
    
}